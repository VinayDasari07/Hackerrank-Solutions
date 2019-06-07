/*
problem link = "https://www.hackerrank.com/challenges/game-of-thrones/problem"
*/

------------------------------------------CODE---------------------------------------------
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str1[100001];
 // char str2[10001];
  scanf("%[^\n]%*c", str1);
 // scanf("%[^\n]%*c", str2);
  int l1 = strlen(str1);
  //int l2 = strlen(str2);
  int i, j, c = 0;
  int count1[26] = {0};
 // int count2[26] = {0};
  for (i = 0; i < l1; i++)
    count1[str1[i] - 'a']++; // count the no of occurences of each char of string 1
    int pos = -1;
  for (i = 0; i < 26; i++)
    if(count1[i] % 2 != 0) // each char's count should be even to form a palindrome
      c++;


      if(c<=1) // we could have a single char with odd count to place it at middle of the string
      printf("YES\n");
      else printf("NO\n");
      

 
}
