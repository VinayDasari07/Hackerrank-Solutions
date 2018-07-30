/*You are working at the cash counter at a fun-fair, 
and you have different types of coins available to you in infinite quantities. The value of each coin is already given. 
Can you determine the number of ways of making change for a particular number of units using the given types of coins?

For example, if you have  4 types of coins, and the value of each type is given as 8,3,1,2 respectively, you can make change for  
units in three ways: 1,1,1 and 1,2 and 3 */



















-------------------------------------CODE-------------------------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n,i,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=1;i<=m;i++)
    {
        scanf("%d ",&a[i]);
    }
    long int cache[n+1][m+1];
        int j;
    long int total1 =0,total2=0;
       
         for(i=1;i<=m;i++)
          cache[0][i] = 1;
        for(i=1;i<=n;i++)
        {    
          for(j=1;j<=m;j++)
            {
                if((i-a[j])<0)
                total1 = 0;
                else
                total1 = cache[i-a[j]][j];
                if(j>=2)
                total2 = cache[i][j-1];
                else total2 = 0;
               cache[i][j] = total1 + total2;
              }
          }
       printf("%li\n",cache[n][m]);
    }

