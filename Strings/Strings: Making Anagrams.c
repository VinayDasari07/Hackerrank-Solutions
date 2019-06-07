/*
Sample Input

cde
abc
Sample Output

4
Explanation

We delete the following characters from our two strings to turn them into anagrams of each other:

Remove d and e from cde to get c.
Remove a and b from abc to get c.
We must delete  characters to make both strings anagrams, so we print 4 on a new line.
problrm link = "https://www.hackerrank.com/challenges/ctci-making-anagrams/
problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings"



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
  char str1[10001];
  char str2[10001];
  fgets(str1,10001,stdin);
  fgets(str2,10001,stdin);
  int l1 = strlen(str1)-1; 
  int l2 = strlen(str2);
  int i,j,c=0;
  int count[100001] = {0};
  for(i=0;i<l1;i++)
  for(j=0;j<l2;j++)
  if((str1[i]==str2[j]) && (count[j]==0)) //making sure that already paired char shound not be chosen
      {
        c++;
        count[j] = 1;
        break;
      }
     
  printf("%d\n",(l1-c)+(l2-c));//addition of the differences of len and common str len will be our ans
}

-----------------------------------------OPTIMIZED CODE-------------------------------------------------
  //INSTEAD OF  BIG O(LENGTH OF FIRST STRING * LENGTH OF SECOND STING)
  //OPTIMIZED CODE IS OF BIG O(LENGTH OF ONE STRING(max length))
  


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
  char str1[10001];
  char str2[10001];
 scanf("%[^\n]%*c",str1);
 scanf("%[^\n]%*c", str2);
 int l1 = strlen(str1);
 int l2 = strlen(str2);
 int i, j, c = 0;
 int count1[26] = {0};
 int count2[26] = {0};
 for (i = 0; i < l1; i++)
     count1[str1[i]-'a']++; // count the no of occurences of each char of string 1
   
 for (i = 0; i < l2; i++)
     count2[str2[i]-'a']++; // count the no of occurences of each char of string 2
   
 for (i = 0; i < 26; i++)
     c += abs(count1[i]-count2[i]); // add the difference of count of each char in both string
                                    // for e.g abcde and bccde : here a and one c should be deleted to make them anagrams

  printf("%d\n",c);
 
}

  
  
  
