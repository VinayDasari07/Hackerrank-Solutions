/*problem link = "https://www.hackerrank.com/challenges/sum-vs-xor/problem"

method explanation
Totally a mathematical trick.

just count total numbers of ZERO present in binary number of given n, and answer will be the 2 to the power of (total num of zero).

I believe the justification is that the xor simulates binary addition without the carry over to the next digit. 
For the zero digits of n you can either add a 1 or 0 without getting a carry which implies xor = + whereas if a digit in n is 1 
then the matching digit in x is forced to be 0 on order to avoid carry. 
For each 0 in n in the matching digit in x can either being a 1 or 0 with a total combination count of 2^(num of zero).



*/
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

int main()
{
    long long int n;
    scanf("%lli\n",&n);
    long long int i,j,count =0;
    while(n)
    {
      count += n % 2 ? 0 : 1;
      n /= 2;
    }
    count = pow(2,count);
    printf("%lli\n",count);
}
