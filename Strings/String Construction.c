/*
problem link = "https://www.hackerrank.com/challenges/string-construction/problem"*/

------------------------------------------CODE-------------------------------------------

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
  scanf("%d\n", &t);
  while (t--) 
  {
    char str[100001];
    //char str2[100001];
    scanf("%[^\n]%*c", str);
    //scanf("%[^\n]%*c", str2);
    int len = strlen(str);
    //int len2 = strlen(str2);
    int i, j;
    char sample[27] = "abcdefghijklmnopqrstuvwxyz";
    int count[26] = {0};
    
      for (j = 0; j < 26; j++) {
        for (i = 0; i < len; i++) {
          if (str[i] == sample[j]) {
            count[j]++;
            break;
          }
        }
      }
        int c = 0;
        for (i = 0; i < 26; i++)
        c += count[i];
        printf("%d\n", c);
  }
}










//Another solution i found which is better than mine


int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char *a = (char *)calloc(26, sizeof(char));
        char *s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = 0;
        for(int i = 0; i < strlen(s); i++) {
            if(!a[s[i]-'a']) { //Not using the sample array to check the char
                a[s[i]-'a'] = 1; //directly subtracting a - 'a' which is 0 or b - 'a' is 1
                result++;
                if(result == 26)
                    break;
            }
            
        }
        printf("%d\n", result);
    }
    return 0;
}
