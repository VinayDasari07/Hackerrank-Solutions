/*
5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
Sample Output

3
4
0
0
4
Explanation

The characters marked red are the ones that can be deleted so that the string doesn't have matching consecutive characters.
problem  link = "https://www.hackerrank.com/challenges/alternating-characters/copy-from/
109818148?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings"
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
    int t;
    scanf("%d\n",&t);
    while(t--){
    char str[100001];
    scanf("%[^\n]%*c", str);
    int i,j,c=0;
    int ab=0,ba=0;// to know whether the seq is AB or BA
    for(i=0;i<strlen(str)-1;i++)
    {
        //for(j = i+1 ; j<strlen(str);j++)
        //{
            if(str[i]=='A'&& str[i+1]=='B')
            {
                c += 2;
                ab = 1;
                break;// break after knowing the type of seq
                //printf("AB\n");
            }
             else if(str[i]=='B'&& str[i+1]=='A')
            {
                c += 2;  // counting the seq
                ba = 1;
                break;
                //printf("BA\n");
            }
       // }
    }
        if(ab !=0 || ba!=0)  // if there is seq of AB or BA
        for(j=i+2;j<strlen(str)-1;j++)
    {
        //for(j = i+1 ; j<strlen(str);j++)
        //{
            if((str[j]=='A'&& str[j+1]=='B') && (ab==1)) // if seq is AB
            {
                c += 2;
                
                //printf("AB\n");
            }
            else if((str[j] =='A' && str[j+1]=='A') && (j+2 == strlen(str))&&(ab==1)) // if the seq has A at last
                                                                                      // it should be counted as ABABA is seq of 5
            c++;
            else if (( str[j + 1] == 'A') &&
                     (j + 2 == strlen(str)) && (ab == 1))
              c++;
            else if ((str[j] == 'B' && str[j + 1] == 'A') && (ba == 1)) { // if the seq is BA
              c += 2;
              
              // printf("BA\n");
             } 
             else if ((str[j] == 'B' && str[j + 1] == 'B') &&  // if the seq has B at last it should be counted
                                                               // as BABAB is seq of 5
                        (j + 2 == strlen(str)) && (ba==1))
               c++;
             else if ((str[j + 1] == 'B') && (j + 2 == strlen(str)) &&
                      (ba == 1))
               c++;
             // }
    }
    int len = strlen(str);
     if (c == 0)  // if there is no seq then AAAA is seq of 1 with
                               // A and also for BBBB seq is B of 1
     printf("%d\n", len -1);
     else printf("%d\n",len - c); // the no of chars having req seq should be
                               // subtracted from total length for the req ans
    }
}
