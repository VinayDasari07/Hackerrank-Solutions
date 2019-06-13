/*problem link = "https://www.hackerrank.com/challenges/maximizing-xor/problem"*/
-------------------------------------------------CODE---------------------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int l, r;
  scanf("%d\n", &l);
  scanf("%d\n", &r);
  int i, j;
  int max ;
  for (i = l; i <= r; i++)
  for(j = l ; j <= r ; j++)
    if((i^(j))>max)
    max = (i ^ (j));
    printf("%d\n",max);
  
}
