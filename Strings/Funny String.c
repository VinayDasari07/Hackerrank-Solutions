/*
problem link = "https://www.hackerrank.com/challenges/funny-string/problem"

*/
-------------------------------CODE------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char str[10001];
        scanf("%[^\n]%*c",str);
        int i,j;
        int len = strlen(str);
        char copy[10001]; //for storing reverse
        int k = len -1;
        for(i=0;i<len;i++)
        copy[i] = str[k--];
        int diff1=0,diff2=0;
        int check = 1;
        for (i = 0; i < len-1; i++){
         diff1 = abs(str[i] - str[i+1]); //adjacent ascii diff of normal string
         diff2 = abs(copy[i]-copy[i+1]); //adjacent ascii diff of reverse string
         if(diff1==diff2)
         check = 1;
         else {
             check = 0;
             break;
         }
        }
        if(check==0)
        printf("Not Funny\n");
        else printf("Funny\n");
          
    }
}
