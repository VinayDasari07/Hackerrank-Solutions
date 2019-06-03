/* Julius Caesar protected his confidential information by encrypting it using a cipher.
Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, 
just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.
Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc

Function Description

Complete the caesarCipher function in the editor below. It should return the encrypted string.

caesarCipher has the following parameter(s):

s: a string in cleartext
k: an integer, the alphabet rotation factor
Sample Input

11
middle-Outz
2
Sample Output

okffng-Qwvb
Explanation

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +2:    cdefghijklmnopqrstuvwxyzab

m -> o
i -> k
d -> f
d -> f
l -> n
e -> g
-    -
O -> Q
u -> w
t -> v
z -> b



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

int main(){
    int i,j,n,m;
    scanf("%d\n",&n);
    char str[n];
    for(i=1;i<=n;i++)
    scanf("%c",&str[i]);
    scanf("%d\n",&m);
    
    char sample1[26] = "abcdefghijklmnopqrstuvwxyz";
    char sample2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i=1;i<=n;i++)
    {
        char ch = str[i];
        for(j=0;j<26;j++)
        {
            if(ch == sample1[j])
            str[i] = sample1[(j+m)% 26]; // for lowercase letters
            else if (ch== sample2[j])
            str[i] = sample2[(j+m) % 26]; // for uppercase letters
        }
    }

    for (i = 1; i <= n; i++)
    printf("%c",str[i]);
}
