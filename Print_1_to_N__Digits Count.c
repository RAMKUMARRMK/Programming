#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        if(i>=1 && i<10)
        b=b+1;
        else if(i>=10 && i<=99)
        b=b+2;
        else if(i>=100 && i<=999)
        b=b+3;
        else if(i>=1000 && i<=9999)
        b=b+4;
        else if(i>=10000 && i<=99999)
        b=b+5;
        else if(i>=100000 && i<=999999)
        b=b+6;
        else if(i>=1000000 && i<=9999999)
        b=b+7;
    }
    printf("%d",b);
}



Question:


A positive integer N is passed as the input. If we print all the numbers from 1 to N continuosly, the program must find the
number of characters(digits) C printed and print the count C as the output.

Input Format:
The first line contains N.

Output Format:
The first line contains C.

Boundary Conditions:
1 <= N <= 9999999


Example Input/Output 1:

Input:
2

Output:
2

Explanation:
We print 12 and hence the total number of characters is 2.


Example Input/Output 2:

Input:
15

Output:
21

Explanation:
We print 123456789101112131415 and hence the total number of characters is 21
