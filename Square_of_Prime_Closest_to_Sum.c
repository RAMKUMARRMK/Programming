#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=0,e=0,f=0;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(int j=1; j<=c; j++)
    {
        f=0;
        for(int i=2; i<=j; i++)
        {
            if(j%i==0)
            f++;
        }
        if(f==1)
        d=j;
    }
    for(int j=c; j<=2*c; j++)
    {
        f=0;
        for(int i=2; i<=j; i++)
        {
            if(j%i==0)
            f++;
        }
        if(f==1)
        {
            e=j;
            break;
        }
    }
    if(d==e)
    printf("%d",c*c);
    else if((c-d)==(e-c))
    printf("-1");
    else if((c-d)<(e-c))
    printf("%d",d*d);
    else if((c-d)>(e-c))
    printf("%d",e*e);
}



Question:


Two numbers N1, N2 are passed as input. The program must find the closest prime number to their sum and then print the
square of that prime number. If there are multiple prime numbers which are the closest to the sum, then the program must
print -1.

Input Format:
The first line will contain the number N1
The second line will contain the number N2

Boundary Conditions:
1 <= N1 <= 99999999
1 <= N2 <= 99999999

Output Format:
The square of the prime number as per the conditions mentioned above.


Example Input/Output 1:

Input:
2
1

Output:
9

Explanation:
The sum of the numbers is 3. The prime number closest to 3 is 3 itself. Hence square of 3 = 9 is printed as output.


Example Input/Output 2:

Input:
10
2

Output:
-1

Explanation:
The sum of the numbers is 12. The prime numbers closest to 12 are 11 and 13 (both are 1 from 12). As there are multiple
prime numbers which are closest to the sum, the output is -1.
