/* It's New Year's Day and everyone's in line for the Wonderland rollercoaster ride! There are a number of people queued up, 
and each person wears a sticker indicating their initial position in the queue. Initial positions increment by 1 from 1 at the front of 
the line to n at the back.
Any person in the queue can bribe the person directly in front of them to swap positions. If two people swap positions, 
they still wear the same sticker denoting their original places in line. One person can bribe at most two others. For example, 

link of the problem :
"https://www.hackerrank.com/challenges/new-year-chaos/
problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays"
2
5
2 1 5 3 4
5
2 5 1 3 4
Sample Output

3
Too chaotic

*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int find(int i , int a[],int n,int k){//to find the pos of the ele
    int j;
    for(j=k+1;j<=n;j++)//k+1 coz the ele will be behind its current pos before reaching the req state
    {
        if(i==a[j]){
        return j;
        
       }
    }
    return 0;
}



int main(){
    int t;
    scanf("%d\n",&t);
    while(t--){
     int n;
     scanf("%d\n",&n);
     int arr[n+1];
     int i,j;
     int count[n + 1];
     int copy[n + 1];
     for(i=1;i<=n;i++)
     {
         scanf("%d ",&arr[i]);
         copy[i] = i;//to check from initial state to desired state
         count[i] = 0;//to check the limit of bribing i.e 2
     }
     int pos = 0;
     int ele,t,c=0;
     for (i = 1; i <= n; i++) {
      if((arr[i]!=copy[i]) && (count[arr[i]]<2))
      {
         ele = arr[i];
         pos = find(ele,copy,n,i);
         count[arr[i]]++;
         t = copy[pos-1];//swapping the nos to front by 1 pos
         copy[pos-1] = copy[pos];
         copy[pos] = t;
         c++;
         i = i - 1;
        
      } 
        else if ((arr[i] != copy[i]) && (count[arr[i]] >= 2)){//the moment when the condition of bribing only 2 fails
           
        break;
        }
     }
     int complete = 1;
     for (j = 1; j <= n; j++)
      if(arr[j]!=copy[j]){//check if copy has the same seq as the original
       complete = 0;
       break;
      }
      if(complete==1)
      printf("%d\n",c);
      else printf("Too chaotic\n");
     
    }
}
