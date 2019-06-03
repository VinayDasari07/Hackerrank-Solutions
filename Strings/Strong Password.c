/* Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:
numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

Input Format

The first line contains an integer n denoting the length of the string.

The second line contains a string consisting of n characters, the password typed by Louise. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

Output Format

Print a single line containing a single integer denoting the answer to the problem.
Sample Input 0

3
Ab1
Sample Output 0

3
Explanation 0

She can make the password strong by adding 3 characters, for example, $hk, turning the password into Ab1$hk which is strong.

2 characters aren't enough since the length must be at least 6.

Sample Input 1

11
#HackerRank
Sample Output 1

1
Explanation 1

The password isn't strong, but she can make it strong by adding a single digit.

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
char numbers[20] = "0123456789";
char lower_case[30] = "abcdefghijklmnopqrstuvwxyz";
char upper_case[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char special_characters[20] = "!@#$%^&*()-+";
int find(char str[],int i,char arr[])
{
    for(int j=0;j<strlen(arr);j++)
    if(str[i]==arr[j])
    return 1;

    return 0;

}


int main()
{
  int n,i;
  char str[101];
  scanf("%d\n", &n);
  for (i = 1; i <= n; i++)
    scanf("%c",&str[i]);
    int digit=1,lower=1,upper=1,special=1;
    for (i = 1; i <= n; i++)
      {
          
         
            /*
            simple method without using find function
            if((str[i] >='0'&& str[i] <='9') )
            digit =0;
            else if (str[i] >= 'a' && str[i] <= 'z')
            lower =0;
            else if (str[i] >= 'A' && str[i] <= 'Z')
            upper =0;
            else if(find(str,i,special_characters))
            special =0; */
            
            
            if (find(str, i, numbers))
            digit = 0;
            else if (find(str, i, lower_case))
            lower = 0;
            else if (find(str, i, upper_case))
            upper = 0;
            else if (find(str, i, special_characters))
            special = 0;
            
      }
       int sum = digit+lower+upper+special;
       int dif = 6-n;
       if (sum>dif)
       printf("%d\n",sum);
       else printf("%d\n",dif);

}













