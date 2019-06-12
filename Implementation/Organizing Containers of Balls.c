/*problem link = "https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem"*/
-------------------------------------------CODE----------------------------------------------------
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
    int q;
    scanf("%d\n",&q);
    while(q--)
    {
        int n;
        scanf("%d\n",&n);
        long long int a[101] = {0}; //containers limit of storing
        long long int b[101] = {0}; //count of each ball type
        int i,j;
        long long int val;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%lli",&val);
                a[i] += val;
                b[j] += val; 
            }
        }
        int c = 1;
        for(i=0;i<n;i++)
        {
            
            for(j=i;j<n;j++)
            {
              if (a[i] == b[j]) //for each type of ball there must be a container of equal size to store those balls
              {
                int temp = b[j]; // sort 
                b[j] = b[i];
                b[i] = temp;
                break;
              }
            }
                if(j==n) // if there isn't any container to store any particular type of balls then its impossible
                {
                    c = 0;
                    break;
                }
        }
        if(c==0)
        printf("Impossible\n");
        else printf("Possible\n");


    }
}
