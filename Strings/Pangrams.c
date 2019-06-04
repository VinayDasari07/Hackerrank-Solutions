/*
Roy wanted to increase his typing speed for programming contests. His friend suggested that he type the sentence
"The quick brown fox jumps over the lazy dog" repeatedly. This sentence is known as a pangram because it contains every letter of the 
alphabet.

After typing the sentence several times, Roy became bored with it so he started to look for other pangrams.

Given a sentence, determine whether it is a pangram. Ignore case.

Function Description

Complete the function pangrams in the editor below. It should return the string pangram if the input string is a pangram.
Otherwise, it should return not pangram.

pangrams has the following parameter(s):

s: a string to test
Sample Input 0

We promptly judged antique ivory buckles for the next prize

Sample Output 0

pangram

Sample Explanation 0

All of the letters of the alphabet are present in the string.

Sample Input 1

We promptly judged antique ivory buckles for the prize

Sample Output 1

not pangram

Sample Explanation 0

The string lacks an x.

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
 char str[1001];
 fgets(str,1001,stdin);
 char sample1[26] = "abcdefghijklmnopqrstuvwxyz";//for lowercase
 char sample2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//for uppercase
 int i,j;
 int count[26] = {0};
 for(i=0;i<strlen(str);i++)//for each char
 {
   for(j=0;j<26;j++)//checking in sample1 and sample2
   {
       if(str[i]==sample1[j] || str[i]==sample2[j])
       count[j] = 1;//ignoring the case and counting each char
   }
 }
 int sum = 0;
 for(i=0;i<26;i++)
 sum += count[i];//count should be 26 if all chars are present
 if(sum==26)
 printf("pangram\n");
 else printf("not pangram\n");


}
