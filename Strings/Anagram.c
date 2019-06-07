/*
problem link = "https://www.hackerrank.com/challenges/anagram/problem"
*/
-----------------------------CODE----------------------------
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
    int t;
    scanf("%d\n",&t);
 while(t--){
  char str1[10001];
  scanf("%[^\n]%*c", str1);
  int l1 = strlen(str1);
  int i, j, c = 0;
  int count1[26] = {0};
  int count2[26] = {0};
  if(l1 % 2 !=0) // odd no of char's will not make anagrams as we have to split the string in two halves str1 and str2
  printf("-1\n");
  else{
  for (i = 0; i < l1/2; i++) // for str1 (first half)
    count1[str1[i] -
           'a']++; // count the no of occurences of each char of string 1

  for (i = l1/2 ; i < l1; i++) // for str2 (second half)
    count2[str1[i] -
           'a']++; // count the no of occurences of each char of string 2

  for (i = 0; i < 26; i++)
    c += abs(count1[i] -
             count2[i]); 

  printf("%d\n", c/2); divide by 2 because we have to change only one string's characters
  }
}
}
