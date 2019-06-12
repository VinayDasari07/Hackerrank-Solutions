/*problem link = "https://www.hackerrank.com/challenges/encryption/problem"*/
---------------------------------------------------CODE------------------------------------------
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
    char str[100];
    fgets(str,100,stdin);
    int i;
    char strTrim[100];
    int j = 0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            strTrim[j++] = str[i]; //modifying the string to remove white spaces is not an efficient method
        }
    }
    strTrim[j] = '\0';
    int rows = floor(sqrt(strlen(strTrim)));
    int cols = ceil(sqrt(strlen(strTrim)));
   
    if((rows*cols) < strlen(strTrim)) //if rows = 2 and cols = 3 and len = 8 then 2*3=6<8 so we need 3*3 matrix to store
    while (rows < cols)
    rows++;
    int k;
    for(i=0;i<cols;i++)
    {
        for(k=i;k<strlen(strTrim);k += cols)
        printf("%c",strTrim[k]);
        printf(" ");
    }


}
