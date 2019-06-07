/*
problem link = "https://www.hackerrank.com/challenges/beautiful-binary-string/problem"
*/

---------------------------------------------CODE----------------------------------------------
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
    char str[n+1];
    int i,j;
    scanf("%[^\n]%*c",str);
    int c = 0;
    for(i=0;i<n-2;i++)
    {
        if(str[i]=='0'&& str[i+1]=='1'&& str[i+2]=='0' )
        {
            c++;
            i += 2;
        }
    }
    printf("%d\n",c);
}
