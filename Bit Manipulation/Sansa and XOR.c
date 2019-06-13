/*problem link = "https://www.hackerrank.com/challenges/sansa-and-xor/problem"
XOR property is used to solve this

Problem Logic Breakdown   1. A^0=A -> Rule 1 2. A^A=0 -> Rule 2 3. A^(B^C)=(A^B)^C -> Rule 3
When the number of values is even, the resulting subarrays are as follows:

Test case #1: {1,2,3,4}

1⊕2⊕3⊕4⊕(1⊕2)⊕(2⊕3)⊕(3⊕4)⊕(1⊕2⊕3)⊕(2⊕3⊕4)⊕(1⊕2⊕3⊕4)

Notice that 1 occurs an even number of times, as does 2, 3, and 4. XORing any number an even number of times produces 0 as a result.
When the number of values is odd, the resulting subarrays are as follows:

Test case #2: {1,2,3}
1⊕2⊕3⊕(1⊕2)⊕(2⊕3)⊕(1⊕2⊕3)

Notice that every even index (0, 2) occurs an odd number of times and that every odd index (1) occurs an even number of times.
Recall that XORing a number by itself produces 0 for any even number of XOR operations.
SPOILER

If vector<int>'s size() is even, output 0
Else XOR the vector for every even index, starting from 0


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
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        if(n % 2 ==0)
        printf("0\n");
        else {
            int result = 0;
            for(i=0;i<n;i += 2)
            result ^= a[i];
            printf("%d\n",result);
        }
    }
}
