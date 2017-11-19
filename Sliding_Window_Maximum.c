#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c[10000],d=0,e=0;
    scanf("%d%d",&a,&b);
    for(int i=0; i<a; i++)
    {
        scanf("%d",&c[i]);
    }
    for(int i=0; i<=a-b; i++)
    {
        for(int j=i; j<i+b; j++)
        {
            if(d<c[j])
            {
                d=c[j];
            }
        }
        if(d>e)
        {
            printf("%d ",d);
        }
        else if(d<=e)
        {
            printf("%d ",e);
        }
        e=d; d=0;
    }
}



Question:


Given a list of N positive integers and a sliding window of size W, the program must print the compare the maximum value
CURRMAX present in the specific window instance with that of the previous window maximum PREVMAX and print the
maximum value of CURRMAX and PREVMAX. The maximum values must be separated by a space.

Input Format:
The first line contains N and W separated by a space.
The second line contains N integer values separated by a space.

Output Format:
The first line contains the maximum values separated by a space.

Boundary Conditions:
1 <= N <= 10000
W <= N


Example Input/Output 1:

Input:
7 3
10 3 8 4 2 11 1

Output:
10 10 8 11 11
