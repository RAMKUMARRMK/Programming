#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int flag=0;
    scanf("%s",&a);
    int b=strlen(a);
    int j=b-1;
    for(int i=0; i<b/2; i++)
    {
        if(a[i]!=a[j])
        {
            if(a[i]==a[j-1] && (i!=j-1))
            {
                printf("%c",a[j]);
                break;
            }
            else
            {
                printf("%c",a[i]);
                break;
            }
        }
        j--;
    }
}



Question:


String S which is a palindrome is passed as the input. But just one
alphabet A is missing in S. The program must print the missing
alphabet A.

Note: The FIRST alphabet of S will always be present.

Input Format:
The first line contains S.

Output Format:
The first line contains the missing alphabet A.

Boundary Conditions:
The length of the input string S is between 3 to 100.
The FIRST alphabet of S will always be present.


Example Input/Output 1:

Input:
malayaam

Output:
l


Example Input/Output 2:

Input:
abcddcb

Output:
a
