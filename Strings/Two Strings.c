/*
problem link = "https://www.hackerrank.com/challenges/two-strings/problem"*/
---------------------------------CODE----------------------------------------------------
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
        char str1[100001];
        char str2[100001];
        scanf("%[^\n]%*c",str1);
        scanf("%[^\n]%*c", str2);
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int i,j,c=0;
        char sample[27] = "abcdefghijklmnopqrstuvwxyz";
        int count[26] = {0};
        int count2[26] = {0};
        
          for (j = 0; j < 26; j++) {
            for (i = 0; i < len1; i++)
              if (str1[i] == sample[j]) {
                count[j]++;
                break;
            }

        }
        for (j = 0; j < 26; j++) {
          for (i = 0; i < len2; i++)
            if (str2[i] == sample[j]) {
              count[j]++;
              break;
            }
        }
        for (j = 0; j < 26; j++)
        if(count[j]>1)
        {
            c = 1;
            break;
        }

          if (c == 1)
            printf("YES\n");
          else
            printf("NO\n");



    }
}
