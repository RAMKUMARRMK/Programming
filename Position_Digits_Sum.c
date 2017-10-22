#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=0,j=0,c[99],d[99];
    scanf("%d%d",&a,&b);
    while(a!=0 || b!=0)
    {
        printf("%d ",a%10+b%10);
        a=a/10;
        b=b/10;
    }
}



Question:


The program must accept two positive integers as the input and then print the sum of their unit digits, tenth digits and so
on.

Input Format:
The first line will contain A and B separated by a space.

Output Format:
The first line will contain the sum of unit digits, tenth digits and so on with the values separated by a space.

Boundary Conditions:
1 <= A,B <= 9999999


Example Input/Output 1:

Input:
23 49

Output:
12 6


Example Input/Output 2:

Input:
12456 687

Output:
13 13 10 2 1
