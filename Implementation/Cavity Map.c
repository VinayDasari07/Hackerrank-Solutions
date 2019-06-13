/*problem link = "https://www.hackerrank.com/challenges/cavity-map/problem"*/
-------------------------------------CODE-------------------------------------------------------
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
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%1d",&a[i][j]);
    for (i = 1; i < n-1; i++)
      for (j = 1; j < n -1; j++)
      {
        if (a[i][j - 1] < a[i][j] &&
            a[i][j + 1] < a[i][j] && a[i-1][j] < a[i][j] &&
            a[i+1][j] < a[i][j])
            a[i][j] = 'X';
      }
    for (i = 0; i < n; i++)
      {
      for (j = 0; j < n; j++) {
        if (a[i][j] == 'X')
          printf("%c", a[i][j]);
        else
          printf("%d", a[i][j]);
      }
      printf("\n");
    }
}
