#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]%10>a[j]%10)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int s=a[0], m=a[n-1];
    for(i=0; i<n; i++)
    {
        if(a[i]<s&&s%10==a[i]%10)
        s=a[i];
        if(a[i]>m&&a[i]%10==m%10)
        m=a[i];
    }
    printf("%d",m-s);
}



Question:


Given N numbers, the program must find and print the difference between numbers having the largest and smallest unit
digits.
- If multiple numbers have the largest unit digit, then choose the largest number among them.
- If multiple numbers have the smallest unit digit, then choose the smallest number among them.

Input Format:
The first line contains N.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains the difference between the numbers having the largest and smallest unit digits.

Boundary Conditions:
1 <= N <= 9999


Example Input/Output 1:

Input:
5
19 21 32 41 89

Output:
68

Explanation:
Two numbers 19 and 89 have the largest unit digit 9. We choose 89 as per the condition given.
Two numbers, 21 and 41 have the smallest unit digit 1. We choose 21 as per the condition given.
Hence the difference is 89-21 = 68
