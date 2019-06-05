/*
link = "https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=
interview-preparation-kit&playlist_slugs%5B%5D=arrays&h_r=next-challenge&h_v=zen"
i   arr                         swap (indices)
0   [7, 1, 3, 2, 4, 5, 6]   swap (0,3)
1   [2, 1, 3, 7, 4, 5, 6]   swap (0,1)
2   [1, 2, 3, 7, 4, 5, 6]   swap (3,4)
3   [1, 2, 3, 4, 7, 5, 6]   swap (4,5)
4   [1, 2, 3, 4, 5, 7, 6]   swap (5,6)
5   [1, 2, 3, 4, 5, 6, 7]
It took  5 swaps to sort the array.

*/
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
    int n;
    scanf("%d\n", &n);
    int arr[n + 1];
    int i, j;
    int min = 100001;
    for (i = 1; i <= n; i++) {
      scanf("%d ", &arr[i]); 
      if(min>arr[i])//to avoid unnecessarily starting from 1
      min = arr[i];
    }
   
    int c = 0;//to count no of swaps
    

      for(i=min;i<n;i++){
      if(arr[i]!=i)//if the array is already sorted
      for(j=i+1;j<=n;j++)//i+1 coz we sorted the array till i
      {
          if(arr[j]==i)//finding the ele which we are looking i.e i
          {
              arr[j]= arr[i];//swapping
              arr[i] = i;
              c++;
              break;
          }
      }
      }
    printf("%d\n",c);
}
