/*problem link = "https://www.hackerrank.com/challenges/fair-rations/problem"*/
------------------------------------CODE-----------------------------------------------
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
    int arr[n];
    int sum = 0;
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int count = 0;
    if (sum % 2 == 1) { //sum should be even to make it even by giving loaf of bread to 2 people at a time
      printf("NO\n");
    } else {
      for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
          arr[i] = arr[i] + 1;
          arr[i + 1] = arr[i + 1] + 1;
          count += 2;
        }
      }
      printf("%d\n",count);
    }
}
