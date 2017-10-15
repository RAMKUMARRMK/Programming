#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[100000],c=0,d=0,flag;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<a; i++)
    {
        flag=0;
        for(int j=i-1; j>=0; j--)
        {
            if(b[i]<b[j])
            {
                printf("%d ",b[j]);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",0);
        }
        
    }
}


Question:


N numbers are passed as input to the program. The program must print the immediate previous larger number. If there is no
such larger number print 0 for that specific number.

Note: As N can be as high as 100000, optimize your algorithm to avoid timeout.

Input Format:
The first line contains N.
The second line contains N numbers separated by a space.

Output Format:
The first line contains N numbers which denote the immediate previous larger number.

Boundary Conditions:
2 <= N <= 100000


Example Input/Output 1:

Input:
11
455 346 76 304 488 374 385 433 350 9 1000

Output:
0 455 346 346 0 488 488 488 433 350 0
