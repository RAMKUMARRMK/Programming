#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1; i<9999; i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
        {
            printf("%d ",i);
            d++;
        }
        if(d==5)
        {
            break;
        }
    }
}



Question:


Three numbers A, B and C are passed as input. The program must print the first five values that are divisible by A, B and C.

Input Format:
The first line denotes the value of A.
The second line denotes the value of B.
The third line denotes the value of C.

Output Format:
The first line contains the first five numbers divisible by A, B and C (with each value separated by a space).

Boundary Conditions:
1 <= A <= 9999
1 <= B <= 9999
1 <= C <= 9999


Example Input/Output 1:

Input:
2
3
4

Output:
12 24 36 48 60


Example Input/Output 2:

Input:
4
6
8

Output:
24 48 72 96 120
