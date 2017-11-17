#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[200],i=0,b,d=0,e=0,f[100],g=0,flag=0;
    char c=' ';
    while(c==' ')
    {
        scanf("%d%c",&a[i],&c);
        d=d+a[i];
        i++;
    }
    scanf("%d",&b);
    if(d%b==0)
    {
        printf("%d",d);
    }
    for(int k=0; k<i; k++)
    {
        d=0;
        for(int j=0; j<i; j++)
        {
            if(j!=k)
            {
                d=d+a[j];
            }
        }
        if(d%b==0)
        {
            f[g]=d;
            g++;
            flag=1;
        }
    }
    for(int j=0; j<g; j++)
    {
        for(int k=j+1; k<g; k++)
        {
            if(f[k]>f[j])
            {
                int temp=f[k];
                f[k]=f[j];
                f[j]=temp;
            }
        }
    }
    if(flag==1)
    printf("%d ",f[0]);
    if(flag==0)
    printf("-1");
}



Question:


An array of numbers separated by space will be passed as input. A number N is also passed as input. The program has to
print the maximum sum of the numbers in the array which is divisible by N. If there is no such maximum sum of the
numbers, the program should print -1 as output.

Input Format:
The first line contains the array of numbers separated by space.
The second line contains the value of N

Boundary Conditions:
The length of the array of numbers will be from 3 to 200.
1 <= N <= 1000

Output Format:
The maximum sum of the numbers in the array that is divisible by N.


Example Input/Output 1:

Input:
10 20 40 70
3

Output:
120

Explanation:
The maximum sum of numbers that is divisible by 3 is 120 (10+40+70) and hence it is printed as the output.


Example Input/Output 2:

Input:
22 34 54 80 93 41
5

Output:
290

Explanation:
The maximum sum of numbers that is divisible by 5 is 290 (22+54+80+93+41) and hence it is printed as the output.
