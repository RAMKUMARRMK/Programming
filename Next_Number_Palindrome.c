#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,c,d;
    scanf("%d",&a);
    while(d!=b)
    {
       c=a++;
       d=c;
       b=0;
       while(c>0)
       {
           b=b*10+c%10;
           c=c/10;
       }
    }
    printf("%d",d);
}


Question:


Given a number N, the program must print the next palindromic number P.

Boundary Conditions:
9 < N < 100000

Input Format:
First line will contain the number N

Output Format:
First line will contain the next palindromic number P.

Sample Input/Output:


Example 1:

Input:
909

Output:
919


Example 2:

Input:
2131

Output:
2222
