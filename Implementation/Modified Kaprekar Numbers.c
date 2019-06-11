/*problem link = "https://www.hackerrank.com/challenges/kaprekar-numbers/problem"*/

--------------------------------------------------CODE---------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int digits(long int i)
{
    int d =0;
  while (i != 0) {

     i /= 10;
    d++;
  }
  return d;
}
int main()
{
    long long int p,q;
    scanf("%lli\n",&p);
    scanf("%lli\n", &q);

    long long int i,j = 0;
    int arr[100];
    int c =0;//to check if have found the req nos
    for(i=p;i<=q;i++)
    {
        int d1 = digits(i);  // no of digits in right part of square
        
        long long int square = i*i;
        int d2 = digits(square); 
        int d3 = d2 - d1;  // no of digits in left part of square
        j = 1;
        int arrnew[100];
        while(square!=0)// extract each digit in array
        {
            arrnew[j++] = square % 10;
            square /= 10;
        }
        int m = j-1;
        int k;
        for(k = 1;k<j;k++) //reverse the array to get the req no
        {
            arr[k] = arrnew[m--];
            //printf("%d ",arr[k]);
        }
        //printf("\n");
        int left=0,right=0;
        for(k =1;k<=d3;k++) //left part of square
        {
            left = left*10 + arr[k];
        }
        int s;
        for (s =k;s<j; s++) {  //right part of square
          right = right*10 + arr[s];
        }
        if(left + right == i)
        {
            c =1; //we found the req nos
            printf("%lli ",i);
        }

        
    }
    if(c==0) //if we did not find the nos then
    printf("INVALID RANGE\n");
}
