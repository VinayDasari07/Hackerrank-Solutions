/*
problem link = "https://www.hackerrank.com/challenges/chocolate-feast/problem"*/
-----------------------------------CODE------------------------------------------------
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
        int n,c,m;
        scanf("%d %d %d\n",&n,&c,&m);
        int chocs = n/c;
        int wrapper = chocs;
        while (wrapper >= m) {
          int ex_chocs = wrapper / m;
          wrapper = ex_chocs + wrapper % m;
          chocs += ex_chocs;
        }
        printf("%d\n",chocs);
    }
}
