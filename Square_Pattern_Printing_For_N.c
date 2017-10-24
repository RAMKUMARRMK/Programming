#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int a,c[100],flag=0,d[100],y=0,z=0,e[100];
    scanf("%ld",&a);
    for(int i=1;i<=a;i++)
    {
        c[0]=0;
        c[a+1]=0;
        if(flag==1)
        {
            for(int k=1; k<=a; k++)
            {
                d[k]=c[k-1]+c[k+1];
                printf("%ld ",d[k]);
                e[k]=d[k];
            }
            for(int k=1; k<=a; k++)
            {
                c[k]=e[k];
            }
        }
        else if(flag==0)
        {
            for(int j=1; j<=a; j++)
            {
                c[j]=j;
                printf("%ld ",c[j]);
                flag=1;
            }
        }
        printf("\n");
    }
}



Question:


Given N, print the pattern as described in the Example Input/Output.

Input Format:
The first line will contain N.

Output Format:
N lines will contain the required pattern.

Boundary Conditions:
1 <= N <= 50


Example Input/Output 1:

Input:
5

Output:
1 2 3 4 5
2 4 6 8 4
4 8 12 10 8
8 16 18 20 10
16 26 36 28 20


Example Input/Output 2:

Input:
4

Output:
1 2 3 4
2 4 6 3
4 8 7 6
8 11 14 7
