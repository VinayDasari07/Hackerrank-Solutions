/*problem link = "https://www.hackerrank.com/challenges/lonely-integer/problem"
XOR method explanation = "https://www.youtube.com/watch?v=k1i6eIpeXak&feature=youtu.be"*/

-------------------------------------CODE---------------------------------------------
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
    int n;
    scanf("%d\n",&n);
    int count[101] = {0};
    int i,j,val;
    for(i=0;i<n;i++)
    {
    scanf("%d",&val);
    count[val]++;
    }
    for(i=0;i<101;i++)
    {
        if(count[i]==1)
        break;
    }
    printf("%d\n",i);
}

-----------------------------ANOTHER OPTIMAL SOLUTION-------------------------------------------
USING XOR OPERATION
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
    int n;
    scanf("%d\n",&n);
    int a[n];                  // this method explanation link is above
    int i,j,val;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int result = 0;
    for(i=0;i<n;i++)
    result ^= a[i];
    
    printf("%d\n",result);
}
