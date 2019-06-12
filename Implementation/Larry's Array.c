/* problem link = "https://www.hackerrank.com/challenges/larrys-array/problem"
how its similar to 15 puzzle problem = "https://www.cs.bham.ac.uk/~mdr/teaching/modules04/java2/TilesSolvability.html"
we just need to find no of inversions and we have our grid width = 3 considering we have to rotate 3 elements at a time
we do not need to think of the elements which are after the blank space
1 6 5 2 4 3 

1 6 5
2 4 3  is a grid of width 3 so we need to consider the blank space is at last position which is 3rd row 1st column.
       
by the formula mentioned in the link our parity of inversion should be even to sort the array
if the grid width would have been even then the pos of blank space would matter
The formula says:
A.If the grid width is odd, then the number of inversions in a solvable situation is even.
B.If the grid width is even, and the blank is on an even row counting from the bottom (second-last, fourth-last etc),
then the number of inversions in a solvable situation is odd.
C.If the grid width is even, and the blank is on an odd row counting from the bottom (last, third-last, fifth-last etc) 
then the number of inversions in a solvable situation is even.
That gives us this formula for determining solvability:

( (grid width odd) && (#inversions even) )  ||  ( (grid width even) && ((blank on odd row from bottom) == (#inversions even)) )

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

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        int n;
        scanf("%d\n",&n);
        int a[n];
        int i,j;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int width = n;
        int inversions = 0;
        for (i = 0; i < n -1; i++) // for counting 
        for(j=i+1;j<n;j++)       // the no of
            if(a[i]>a[j])        // inversions
            inversions++;
        if (inversions % 2 == 0)
          printf("YES\n");
        else
          printf("NO\n");
    }
}
