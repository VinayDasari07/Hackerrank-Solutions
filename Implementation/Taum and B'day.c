/*
problem link = "https://www.hackerrank.com/challenges/taum-and-bday/problem"*/
--------------------------------CODE----------------------------------
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

    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        long int b,w;
        scanf("%li %li\n",&b,&w);
        long int bc,wc,z;
        scanf("%li %li %li\n", &bc, &wc,&z);
        long int cost = 0;

        if (bc > wc && (wc + z) < bc) {
          cost = (b * wc) + (w * wc) + (b * z);
        }
       else if (wc > bc && (bc + z) < wc) // case 2, white is more expensive
       {
         cost = (b * bc) + (w * bc) + (w * z);
       }
        else if(cost ==0)
        cost = (b * bc) + (w * wc);

        printf("%li\n",cost);
    }
}
