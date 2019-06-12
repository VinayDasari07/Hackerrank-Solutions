/*problem link = "https://www.hackerrank.com/challenges/extra-long-factorials/problem"*/
-------------------------------------------CODE--------------------------------------------------
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
    long long int n;
    scanf("%lli\n",&n);
    int a[1000] = {0};
    a[0] = 1; // start from 1 
    int len = 1; // to check the length of our array / no of digits in our result
    int i,j;
    for(i=2;i<=n;i++) //go from 2 to n
    {
        int carry = 0;
        for(j=0;j<len;j++) // from 0 to no of digits present
        {
            int mul = i*a[j] + carry; 
            a[j] = mul % 10;
            carry = mul/10;

        }
        while(carry) //if carry is present
        {
            len++; // the len will increase i.e no of digits will increase
            a[len-1] = carry % 10; 
            carry /= 10;

        }
       
    }
    for(j=len-1;j>=0;j--)
    printf("%d",a[j]); //reverse wpuld be our result
}
