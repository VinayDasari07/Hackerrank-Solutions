/* 

In the kids version of the game Twister, a player has to form close T-shapes with his moves. After 5 moves, if a T-shape is formed,
the player wins. Given 5 two-dimentional coordinate points, can you tell whether they are closely T-shaped or not?
Print YES if a T-shape can be formed, and NO if not.

There are 4 possible types of T-shaped formations:

image

Input Format

The first line contains the number of test cases T. Each test cases has five lines containing two non-negative integers x 
and y separated by a single space. Points in the same test case are all distinct.

Constraints

1 ≤ T ≤ 500
0 ≤ x ≤ 106
0 ≤ y ≤ 106
Output Format

For each test-case, output Yes if they form T-shaped or No if they don't form T-shaped in a new line.

Sample Input 0

1
7 5
8 5
6 5
7 6
7 7
Sample Output 0

Yes
Explanation 0

The given coordinate points form a close T-shape, hence the output is YES.

Sample Input 1

3
0 1
1 1
2 1
2 2
2 0
0 2
1 2
3 2
1 1
1 0
0 2
0 1
0 0
1 1
2 2
Sample Output 1

Yes
No
No*/
------------------------------------CODE---------------------------------------------------------
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[5][2]={0};
        int i;
        for(i=0;i<5;i++)
        {
            scanf("%d %d",&a[i][0],&a[i][1]);
        }
        int val1,val2,j;
        int count1 = 1;
        for(i=0;i<5;i++)
        {
          val1 = a[i][0];
           val2 = a[i][1];  
          
          for(j=i;j<5;j++)
          {
              if(   (val1==a[j][0]) && ((a[j][1]==val2+1)|| (a[j][1]==val2-1))   )
                  count1++;
          }
        if(count1==3)
        break;
                 
        }
        int count2 = 1;
        for(i=0;i<5;i++)
        {
          val1 = a[i][1];
           val2 = a[i][0];  
          
          for(j=i;j<5;j++)
          {
              if(   (val1==a[j][1]) && ((a[j][0]==val2+1)|| (a[j][0]==val2-1))   )
                  count2++;
          }
        if(count2==3)
        break;
                 
        }
        if(count1==3 && count2==3)
        printf("Yes\n");
        else printf("No\n");
    }
}



