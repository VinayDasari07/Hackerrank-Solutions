/*problem link = "https://www.hackerrank.com/challenges/sherlock-and-squares/problem"*/
--------------------------------------------CODE-------------------------------------
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
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int lb,ub;
        scanf("%d %d\n", &lb,&ub);

        int val1 = ceil(sqrt(lb));//e.g suppose sqrt of a is 6.2 and sqrt of b is 8.3
                                   // we have to find the perfect nos between them for our solution
        int val2 = floor(sqrt(ub));//so we ceil 6.2 to 7 and floor 8.3 to 8 and the find the nos between them
        printf("%d\n",val2-val1+1);//this is the formula for finding no of sq integers in a given range
                                    //floor(sqrt(ub))-ceil(sqrt(lb))+1
        
    }
}
