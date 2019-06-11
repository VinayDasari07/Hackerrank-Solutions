/*
problem link = "https://www.hackerrank.com/challenges/repeated-string/problem"*/
------------------------------------CODE----------------------------------------------
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
    char str[101];
    scanf("%[^\n]%*c",str);
    long long int i,n;
    scanf("%lli\n",&n);
    long long int len  = strlen(str);
    long long int count = 0;
    for(i=0;i<len;i++)
    if(str[i]=='a')
    count++;
    count = (n/len)*count;//e.g string n = 10 , len = 3 then s1(n/len = 3 strings of len 3) + s2(len = n % len i.e len2 = 1) is present
    int len2 = n % len;
    for(i=0;i<len2;i++)//count in str of len2 
      if (str[i] == 'a')
        count++;
        printf("%lli\n",count);
}
