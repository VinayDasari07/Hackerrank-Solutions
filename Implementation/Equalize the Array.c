/*problem link = "https://www.hackerrank.com/challenges/equality-in-a-array/problem"*/
----------------------------------------CODE----------------------------------
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
    int n;
    scanf("%d\n",&n);
    int i,j;
    int count[101] = {0};//we know the range of nos are 1 to 100 
    for (i = 1; i <= n; i++) {
      scanf("%d", &j);
      count[j]++;
    }
    int max = -1;
    for (i = 1; i <=100; i++) //the no which has most counts is our solution
    {
        if(count[i]>max)
        max = count[i];
    }
    printf("%d\n",n-max);//total array size - the most counts
}
