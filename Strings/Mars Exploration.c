/*  
Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, s
, determine how many letters of Sami's SOS have been changed by radiation.

For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit.

Function Description

Complete the marsExploration function in the editor below. It should return an integer representing the number of letters changed 
during transmission.

marsExploration has the following parameter(s):

s: the string as received on Earth
Input Format

There is one line of input: a single string,s .

Note: As the original message is just SOS repeated n times, s's length will be a multiple of 3.
Output Format

Print the number of letters in Sami's message that were altered by cosmic radiation.
Sample Input 0

SOSSPSSQSSOR
Sample Output 0

3
Explanation 0

 = SOSSPSSQSSOR, and signal length |s| = 12 . Sami sent 4 SOS messages (i.e.:12/3 =4 ).
 Expected signal: SOSSOSSOSSOS
 Recieved signal: SOSSPSSQSSOR
 Difference:          X  X   X
 We print the number of changed letters.





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
    char str[100];
    fgets(str, 100, stdin);
    int i,j,n;
    int len = strlen(str);
    
    int count = 0;
    for(i=0;i<len;i=i+3)
    {
     
          if(str[i]!='S')
            count++;
          if(str[i+1]!='O')
            count++;
          if(str[i+2]!='S')
            count++;
      
      
    }
    printf("%d\n",count);
}
