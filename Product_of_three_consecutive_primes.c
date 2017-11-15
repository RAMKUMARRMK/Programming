#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,f=0,k=0,n,a[500];
    scanf("%d",&n);
    for(i=2; i<=500; i++)
    {
        f=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                f=1;
            }
        }
        if(f==0)
        {
            a[k++]=i;
        }
    }
    for(i=0;i<k; i++)
    {
        if(a[i]*a[i+1]*a[i+2]==n)
        {
            printf("%d %d %d",a[i],a[i+1],a[i+2]);
            break;
        }
    }
}



Question:


A number N is the product of three consecutive prime numbers. N is passed as input to the program. The program must print
the three consecutive prime numbers in ascending order. The prime numbers must be separated by a single space.

Input Format:
The first line will contain the value of N.

Boundary Conditions:
30 <= N <= 99999999

Output Format:
The three consecutive prime numbers when multiplied gives N (separated by a single space)


Example Input/Output 1:

Input:
30

Output:
2 3 5

Explanation:
30 = 2*3*5. Hence 2 3 5 is printed as output.


Example Input/Output 2:

Input:
409457

Output:
71 73 79

Explanation:
409457 = 71*73*79. Hence 71 73 79 is printed as output.
