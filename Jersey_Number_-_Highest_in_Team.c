#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    int p=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    if(n%t==0)
    {
        int b=0;
        while(b<n)
        {
            int max=a[b];
            for(int i=b; i<t+b; i++)
            {
                if(max<=a[i])
                {
                    max=a[i];
                }
            }
            printf("%d ",max);
            b=b+t;
        }
    }
    else if(n<t)
    {
        int max1=a[0];
        for(int i=0; i<n; i++)
        {
            if(max1<=a[i])
            {
                max1=a[i];
            }
        }
        printf("%d ",max1);
    }
    else
    {
        int r=n%t,z=0,s=t*r;
        int d[n/t],y=0,p=n-(n%t);
        int g=n/t,h=1;
        if(g==0)
        {
            g=1;
        }
        while(g)
        {
            d[z]=a[y];
            for(int i=y; i<y+t; i++)
            {
                if(d[z]<a[i])
                {
                    d[z]=a[i];
                }
            }
            y=y+t;
            z++;
            g--;
        }
        int ctr=0;
        for(int i=p; i<n; i++)
        {
            if(d[ctr]<a[i])
            {
                d[ctr]=a[i];
            }
            ctr++;
            if(ctr==n/t)
            {
                ctr=0;
            }
        }
        for(int i=0; i<n/t; i++)
        {
            printf("%d ",d[i]);
        }
    }



Question:


In a school there are N students standing in a straight line. Their Jersey numbers from left to right are passed as the input.
The students are to be divided into teams of size T starting from left. First T students form Team 1, next T students form
Team 2 and so on. If N is not divisible by T and say the remainder is R, the R students are distributed among the teams
formed so far in a round robin fashion (starting from the first team) until the R students are assigned to one of the teams.
Once the teams are formed, the program must print the highest jersey number in each team.

Input Format:
The first line contains N.
The second line contains the jersey numbers of N students separated by a space.
The third line contains T.

Output Format:
The highest jersey number in each team separated by a space.

Boundary Conditions:
1 <= N <= 9999999


Example Input/Output 1:

Input:
10
1 5 8 2 4 11 20 6 7 9
5

Output:
8 20


Example Input/Output 2:

Input:
10
1 5 8 2 4 11 3 6 9 7
4

Output:
9 11
