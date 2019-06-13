/*problem link = "https://www.hackerrank.com/challenges/flipping-bits/problem"*/
--------------------------------------------CODE----------------------------------------------
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
    int q;
    scanf("%d\n",&q);
    while(q--)
    {
        long int n;
        scanf("%li\n",&n);
        long int max = pow(2,32)-1;
        printf("%li\n",n^max);
    }
}
