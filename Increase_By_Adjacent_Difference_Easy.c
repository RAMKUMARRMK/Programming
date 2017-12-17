#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[100000],c[100000];
    scanf("%d",&a);
    for(int i=1;i<=a; i++)
    {
        scanf("%d",&b[i]);
    }
    b[0]=0;
    b[a+1]=0;
    for(int i=1; i<=a; i++)
    {
        c[i]=b[i]+abs(b[i+1]-b[i-1]);
        printf("%d ",c[i]);
    }
}



Question:


Given N numbers, the program must increment a given number by the absolute difference between it's adjacent cells. Treat
the other element as zero for the first and last numbers.

Input Format:
The first line contains N.
The second line contains N numbers separated by space.

Output Format:
The first line contains N numbers incremented as per the given condition.

Boundary Conditions:
2 <= N <= 9999
Value of a given number is from -99999 to 99999


Example Input/Output 1:

Input:
6
-20 10 55 -5 20 -10

Output:
-10 85 70 30 25 10
