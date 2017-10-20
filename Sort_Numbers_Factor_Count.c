#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[1000],c=0,d[1000];
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
        for(int j=1; j<=b[i]; j++)
        {
            if(b[i]%j==0)
            {
                c++;
            }
        }
        d[i]=c;
        c=0;
    }
    for(int i=0; i<a-1; i++)
    {
        for(int j=i+1; j<a; j++)
        {
            if(d[i]>d[j])
            {
                int temp=d[i];
                d[i]=d[j];
                d[j]=temp;
                int temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
            }
            else if(d[i]==d[j])
            {
                if(b[i]>b[j])
                {
                    int temp4=b[i];
                    b[i]=b[j];
                    b[j]=temp4;
                }
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        printf("%d ",b[i]);
    }
}


Question:


The program must accept N positive integers as the input and sort them based on the factor count (lowest to highest factor
count). If two numbers have the same factor count, order based on the value of the numbers in the ascending order.

Input Format:
The first line will contain N.
The second line will contain N positive integers separated by a space.

Output Format:
The first line will contain the N positive integers (separated by a space) ordered by their factor count.

Boundary Conditions:
2 <= N <= 1000


Example Input/Output 1:

Input:
5
18 23 100 1200 45

Output:
23 18 45 100 1200


Example Input/Output 2:

Input:
3
29 11 101

Output:
11 29 101
