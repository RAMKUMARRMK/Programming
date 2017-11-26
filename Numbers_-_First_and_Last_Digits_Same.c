#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[9999999],c,d,e;
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {
        scanf("%d",&c);
        e=c;
        d=0;
        while(c>0)
        {
            b[d]=c%10;
            c=c/10;
            d++;
        }
        if(b[0]==b[d-1])
        printf("%d ",e);
    }
}



Question:


N numbers A(1) to A(N) are passed as input. The program must print only the X numbers which have same first and last digit.

Input Format:
The first line contains N.
The second line contains N numbers separated by a space.

Output Format:
The first line contains the X numbers separated by a space.

Boundary Conditions:
2 <= N <= 200
10 <= A(i) <= 9999999
1 <= X <= N


Example Input/Output 1:

Input:
4
102 333 282 500

Output:
333 282
