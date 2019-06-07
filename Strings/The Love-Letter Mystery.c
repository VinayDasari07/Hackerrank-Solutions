/*
problem link = "https://www.hackerrank.com/challenges/the-love-letter-mystery/problem"

*/
---------------------------------------------CODE-----------------------------------------------
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
      char str[10001];
      scanf("%[^\n]%*c",str);
      int i,j;
      char sample[27] = "abcdefghijklmnopqrstuvwxyz";
      int k = strlen(str)-1;
      int l1,l2;
      int c = 0;
      for(i=0;i<(strlen(str)/2);i++)//stopping midway to check for palindrome
        {
            if(str[i]!=str[k]) //if chars are diff
            {
                for(j=0;j<26;j++)
                {
                    if(str[i] == sample[j])//find the pos of first char
                    l1 = j;
                    if(str[k] == sample[j])//find the pos of last char
                    l2 = j;
                }
                c  += abs(l2-l1);//subtract both the pos to calc the no of operations needed to make one of them the other


            }
            k--;
        }
        printf("%d\n",c);
  }
}
