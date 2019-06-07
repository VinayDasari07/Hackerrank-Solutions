/*
Sample Input

3
abcdde
baccd
eeabg
Sample Output

2
Explanation

Only a and b are gemstones because they are the only types that occur in every rock.
problem link = "https://www.hackerrank.com/challenges/gem-stones/problem?h_r=next-challenge&h_v=zen"
*/
-------------------------------------CODE------------------------------------------------
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
    char str[101][101];// 2D array for storing multiple strings
    int i,j;
    for(i=0;i<n;i++)
    scanf("%[^\n]%*c",str[i]);
    char sample[27] = "abcdefghijklmnopqrstuwvxyz"; // for comparing and counting
    int count = 0;
    for (j = 0; j < 26; j++)//for each char of sample
     {
         int c = 0;
       for (i = 0; i < n; i++) //for each string
       {
         int len = strlen(str[i]);
         for(int k = 0;k<len;k++) //across length
         {
             if(str[i][k]==sample[j]){ //count no of occurences
             c++;
             break; //we want to know only the first count
             }
         }
       }
       if(c==n)
       count++; //if a char is present in every string (1 to n)
       
         
     }
   printf("%d\n", count);
}
