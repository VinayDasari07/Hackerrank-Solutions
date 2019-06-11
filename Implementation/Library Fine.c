/*problem link = "https://www.hackerrank.com/challenges/library-fine/problem"*/
-----------------------------------------CODE----------------------------------------------
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
    int d1,d2,m1,m2,y1,y2;
    scanf("%d %d %d\n",&d1,&m1,&y1);
    scanf("%d %d %d\n", &d2, &m2, &y2);
    int hackos = 0;
    if(y1 > y2)
    hackos = 10000;
    if (y1 ==y2) {
      if(m1 > m2)
      hackos = (m1 - m2) * 500 ;
      if ((m1 == m2) && (d1 > d2))
      hackos = (d1 - d2) * 15;
    } 

    printf("%d\n",hackos);
}
