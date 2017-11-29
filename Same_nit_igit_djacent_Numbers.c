#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,d=0;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&c[i][j]);
            c[i][j]=c[i][j]%10;
        }
    }
    for(int i=0; i<a; i++)
    {
        int f=0;
        for(int j=0; j<b-1; j++)
        {
            if(c[i][j]==c[i][j+1])
            {
                if(f==0)
                d=d+2;
                else if(f)
                d++;
                f=1;
            }
            else
            f=0;
        }
    }
    printf("%d",d);
}



Question:


A matrix of size R*C (R rows and C columns) containing numbers (positive integer values) is passed as input. The program
must print the count C of numbers in a given cell which has at least one adjacent cell (in the same row) containing a number
with the same unit digit.

Input Format:
The first line contains R and C separated by a space.
Next R lines contains C values separated by a space.

Output Format:
The first line contains C.

Boundary Conditions:
1 <= R, C <= 100
Example Input/Output 1:

Input:
4 3
20 27 67
13 74 100
37 90 97
53 75 44

Output:
2

Explanation:
The numbers are 27 67 in the first row where both have 7 as their unit digit.
