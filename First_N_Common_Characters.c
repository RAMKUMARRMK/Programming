#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000],b[1000];
    int c,d=0,flag=0;
    scanf("%s%s%d",&a,&b,&c);
    for(int i=0; i<strlen(a); i++)
    {
        flag=0;
        for(int j=0; j<strlen(b); j++)
        {
            if(a[i]==b[j] && a[i]!=' ' && b[j]!=' ')
            {
                if(flag==0)
                {
                    printf("%c",a[i]);
                    d++;
                    flag=1;
                }
                b[j]=' ';
            }
        }
        if(d==c)
        {
            break;
        }
    }
}



Question:


Two string values S1, S2 are passed as the input. The program must print first N characters present in S1 which are also
present in S2.

Input Format:
The first line contains S1.
The second line contains S2.
The third line contains N.

Output Format:
The first line contains the N characters present in S1 which are also present in S2.

Boundary Conditions:
2 <= N <= 10
2 <= Length of S1, S2 <= 1000


Example Input/Output 1:

Input:
abcbde
cdefghbb
3

Output:
bcd

Note:
b occurs twice in common but must be printed only once.
