#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a[100][100],b[100][100],rev=0,a2;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            rev=a[i][j];
            if(i==0 || j==0 || i==n-1 || j==m-1)
            {
                rev=0;
                int a1=a[i][j];
                while(a1!=0)
                {
                    a2=a1%10;
                    rev=rev*10+a2;
                    a1=a1/10;
                }
            }
            if(i!=0 && j!=m-1 && i!=n-1 && j!=0)
            b[i][j]=rev;
            if(i==0)
            b[i][j+1]=rev;
            if(j==m-1)
            b[i+1][j]=rev;
            if(i==n-1)
            b[i][j-1]=rev;
            if(j==0)
            b[i-1][j]=rev;
        }
    }
    for(int i=0; i<n; i++)
    {
    for(int j=0; j<m; j++)
    printf("%d ",b[i][j]);
    }
    printf("\n");
}



Question:


Given an R*C matrix containing positive integers, reverse the values along the edges and shift the edge elements by 1
position in clock wise direction.

Input Format:
The first line contains R and C separated by space.
Next R lines contain C values separated by space.

Output Format:
R lines containing C values with the values along the edges reversed.

Boundary Conditions:
2 <= R, C <= 100

Example Input/Output 1:


Input:

4 4

85 84 12 26
33 43 91 95
98 17 45 66
57 17 73 10

Output:
33 58 48 21
89 43 91 62
75 17 45 59
71 37 1 66
