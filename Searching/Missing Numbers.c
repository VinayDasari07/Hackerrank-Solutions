/*problem link = "https://www.hackerrank.com/challenges/missing-numbers/problem"*/
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
    int n,m;
    int count[101] = {0}; //diff btw max and min is less than 101(<101) so we can store the sequence in array of size 100
    int i,j;
    scanf("%d\n",&n);
    int min = 100001;
    int max = 0;
    int val;
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&val);
        count[val % 101]--;
    }
    scanf("%d\n",&m);
    for (i = 0; i < m; i++) {
      
      scanf("%d", &val);
      if (val < min)
        min = val; // to know where to start iterating while printing
      if (val > max)
        max = val; // to know where to end
      count[val % 101]++;
    }
    for(i=min;i<=max;i++)
    {
        if(count[i % 101]>0)
        printf("%d ",i);
    }
}
