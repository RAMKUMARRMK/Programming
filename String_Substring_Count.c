#include<stdio.h>
#include <stdlib.h>

int main()
{
    char ar1[500],ar2[500];
    int c=0,j=0,z=0,a[100],y;
    scanf("%s%s",&ar1,&ar2);
    int l1=strlen(ar1);
    int l2=strlen(ar2);
    for(int i=0; i<l1; i++)
    {
        if(ar2[j]==ar1[i])
        a[z++]=i;
    }
    for(int i=0; i<z; i++)
    {
        j=0;
        y=a[i];
        while(ar2[j]==ar1[y] && y<l1)
        {
            j++;
            y++;
        }
        if(j==l2)
        c++;
    }
    printf("%d",c);
}



Question:


A string S is passed as the input and another string E is also passed as the input. The program must print the number of times
E appears in string S. The alphabets in both S and E will be in lower case.

Input Format:
The first line contains S.
The second line contains E.

Output Format:
The first line contains the number of times the string E is present in S.

Boundary Conditions:
2 <= Length of a String Value S and E <= 500


Example Input/Output 1:

Input:
eyeyeyeeyeyeeye
eye

Output:
6
