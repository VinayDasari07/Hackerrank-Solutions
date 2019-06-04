/*
Sample Input 0

2
hereiamstackerrank
hackerworld
Sample Output 0

YES
NO
Explanation 0

We perform the following q=2 queries:

 
case 1 :The characters of hackerrank are bolded in the string above. 
Because the string contains all the characters in hackerrank in the same exact order as they appear in hackerrank, 
we print YES on a new line.
case 2:  does not contain the last three characters of hackerrank, so we print NO on a new line.

Sample Input 1

2
hhaacckkekraraannk
rhbaasdndfsdskgbfefdbrsdfhuyatrjtcrtyytktjjt
Sample Output 1

YES
NO
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

int main(){

    int n;
    scanf("%d\n",&n);
    while(n--)
   {
    char str[10001];
    char sample[10] = "hackerrank";
    int count[10] ={0};
    int stored_i = -1;
    fgets(str,10001,stdin);
    int i,j;
    int cont = 1;
    
    for (j = 0; j < 10; j++){//for every char in hackerrank
        if(cont == 1){//check if the order is same
           for (i = stored_i +1; i < strlen(str); i++) { //check in the entire string from previous pos+1
              if (str[i]==sample[j]) {
                if (count[j] == 0) {
                  count[j] = 1;
                  stored_i = i;//to record previous pos
                  break;
                 }
                 else {
                   cont = 0;//if the order of letters jumble
                    break;
                 }
                }

            }
        }
        else break;
    }
    int sum = 0;
     for(i=0;i<10;i++)
       sum += count[i];//counting each chars occurence

    if(sum ==10)
     printf("YES\n");
     else printf("NO\n");




   }
}
