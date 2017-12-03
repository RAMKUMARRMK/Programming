#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000][1000],c=' ';
    int b,i=0,d=0;
    while(c==' ')
    {
        scanf("%s%c",&a[i],&c);
        i++;
    }   
    scanf("%d",&b);
    for(int j=0; j<i; j++)
    {
        if(strlen(a[j])>=b)
        d++;
    }
    printf("%d",d);
}



Question:


Given a string S, which contains several words, print the count C of the words whose length is atleast L. (You can include
punctuation marks like comma, full stop also as part of the word length. Space alone must be ignored)

Input Format:
The first line contains S.
The second line contains L.

Output Format:
The first line contains C

Boundary Conditions:
2 <= Length of S <= 1000


Example Input/Output 1:

Input:
During and after Kenyattas inauguration police elsewhere in the capital, Nairobi, tried to stop the opposition from holding
peaceful demonstrations.
5

Output:
13

Explanation:
The words of minimum length 5 are
During
after
Kenyattas
inauguration
police
elsewhere
capital,
Nairobi,
tried
opposition
holding
peaceful
demonstrations.
