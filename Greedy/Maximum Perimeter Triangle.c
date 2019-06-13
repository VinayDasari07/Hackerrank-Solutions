/*problem link ="https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem"*/
---------------------------------------CODE------------------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge(long int a[], int i1, int j1, int i2, int j2) {
  long int temp[500001]; // array used for merging
  int i, j, k;
  i = i1; // beginning of the first list
  j = i2; // beginning of the second list
  k = 0;

  while (i <= j1 && j <= j2) // while elements in both lists
  {
    if (a[i] < a[j])
      temp[k++] = a[i++];
    else
      temp[k++] = a[j++];
  }

  while (i <= j1) // copy remaining elements of the first list
    temp[k++] = a[i++];

  while (j <= j2) // copy remaining elements of the second list
    temp[k++] = a[j++];

  // Transfer elements from temp[] back to a[]
  for (i = i1, j = 0; i <= j2; i++, j++)
    a[i] = temp[j];
}

void mergesort(long int a[], int i, int j) {
  int mid;

  if (i < j) {
    mid = (i + j) / 2;
    mergesort(a, i, mid);         // left recursion
    mergesort(a, mid + 1, j);     // right recursion
    merge(a, i, mid, mid + 1, j); // merging of two sorted sub-arrays
  }
}

int main() {
  int n;
  scanf("%d\n", &n);
  long int a[n];
  int i, j;
  for (i = 0; i < n; i++)
    scanf("%li", &a[i]);

  mergesort(a, 0, n - 1);
  i = n-3;
  while (i >= 0 && (a[i] + a[i + 1] <= a[i + 2])) {
    i--;
  }
  if (i >= 0)
    printf("%li %li %li\n", a[i], a[i + 1], a[i + 2]);
    else printf("-1\n");
}
