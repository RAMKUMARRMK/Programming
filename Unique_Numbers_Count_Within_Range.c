#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,R1,R2,count=0,i,j,flag;
    scanf("%d%d%d",&N,&R1,&R2);
    int d[N];
    for(i=0; i<N; i++)
    {
        flag=0;
        scanf("%d",&d[i]);
        for(j=0; j<i; j++)
        {
            if(d[j]==d[i])
            {
                flag=1;
            }
        }
        if((d[i]>=R1 && d[i]<=R2) && flag==0)
        {
            count++;
        }
    }
    printf("%d",count);
}



Question:


Given N numbers, the program must find and print the count C of the distinct(unique) numbers which are within a given
range inclusive of R1 and R2.

Input Format:
The first line contains N, R1 and R2 separated by a space.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains the count C.

Boundary Conditions:
1 <= N <= 9999
1 <= R1, R2 <= 999999
R1 <= R2


Example Input/Output 1:

Input:
7 19 44
100 19 51 32 41 89 32

Output:
3

Explanation:
The three unique numbers within the given range (21 to 44 inclusive) are 19, 32 and 41
