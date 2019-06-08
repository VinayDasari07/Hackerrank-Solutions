/*
problem link = "https://www.hackerrank.com/challenges/richie-rich/problem"*/
----------------------------------------------------CODE---------------------------------------------------
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
  int n,count;
  scanf("%d %d\n", &n, &count);
  char arr[n+1];
  int i, j;
  
    scanf("%[^\n]%%c",arr);
    int present_count =0;
   
    int k = n - 1;
    int diff = 0;
    for (i = 0; i < n/2; i++)
    {
        if(arr[i]!=arr[k--])
        diff++; // to know how many diff elements are present in the string for making it a palindrome
    }
    k = n-1;
    if(diff>count)// if diff elements are more than the given no of operations to make it palindrome
    printf("-1\n");//then it isn't possible to make it one
    else
    {
        for (i = 0; i < n/2; i++)//iterate till half of the array (ignore the mid ele)
        {
            if(arr[i]==arr[k])//case 1 : both ele are same
            {
                if(arr[i]!='9')//and they both are not 9
                if(count-2 >= diff)
                {
                    arr[i] = '9';
                    arr[k] = '9';
                    count -= 2;
                }
            }
            else if ((arr[i] != arr[k]) && ((arr[i]=='9') || (arr[k] == '9'))) //one ele is same and one of them is 9
            {
                if (arr[i] == '9')
                {
                    if (count - 1 >= diff -1) //diff - 1 because these are the diff elements
                    {
                        arr[k] = '9';
                        count --;
                        diff--;//one pair of diff ele is done making palindrome
                    }
                }
                else if(arr[k] == '9')
                if (count - 1 >= diff - 1) 
                {

                    arr[i] = '9';
                    count --;
                    diff--;
                }
            }   
            else if ((arr[i] != arr[k]))//both ele are not same
            {
                if (count - 2 >= diff - 1) //if we have the req count to make both the ele 9
                {
                    arr[i] = '9';
                    arr[k] = '9';
                    count -= 2;
                    diff--;
                } else if (count - 1 >= diff - 1) //if we have only one count to make it palindrome
                {
                    if(arr[i] > arr[k])  //we decide the max ele out of the both to make both the ele same
                    arr[k] = arr[i];
                    else arr[i] = arr[k];
                    count--;
                    diff--;
                }

            }

                    k--;//for iterating backwards
        }//for loop end
        if((n % 2 )== 1)//if middle ele is present
        {
            if(count>0)// if we have more count to perform operations
            arr[n/2] = '9'; //make the mid ele 9
        }
        
        printf("%s\n",arr);
    }
}
