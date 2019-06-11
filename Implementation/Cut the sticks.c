/*problem link = "https://www.hackerrank.com/challenges/cut-the-sticks/problem"*/

-------------------------------------CODE------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findmin(int arr[],int n)
{
    int i,mini = 1001;
    for(i=0;i<n;i++)
    {
        if((arr[i]<mini) &&(arr[i]!=0) )
        mini = arr[i];
    }
    return mini;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c = 0;
    for(i=0;i<n;i++)
    {
        c = 0;
        int min = findmin(arr,n);//we have to find the min no at each iteration to delete it from other nos
        for(j=0;j<n;j++)
        if(arr[j]-min >= 0)
        {
          c++;
          arr[j] = arr[j] - min;
        }
        
        if(c==0)
        break;
        printf("%d\n",c);

    }
}
