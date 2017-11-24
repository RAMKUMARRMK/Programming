#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b,c[10000],d[10000],e=0;
    scanf("%ld%ld",&a,&b);
    for(int i=0; i<a; i++)
    scanf("%ld",&c[i]);
    for(int i=0; i<b; i++)
    {
        scanf("%ld",&d[i]);
        for(long int j=0; j<a; j++)
        {
            if(c[j]%d[i]==0)
            {
                c[j]=0;
                e++;
            }
        }
    }
    if(e==a)
    printf("-1");
    else
    {
        for(long int i=0; i<a; i++)
        {
            if(c[i]!=0)
            printf("%ld ",c[i]);
        }
    }
}



Question:


There are N filled balloons each painted with a random number B(i) where i is from 1 to N and the balloons are tied up to a
rope in a straight line. M kids who play football arrive and they decide to burst the balloons with the numbers divisible by
their jersey numbers J(a) where a is from 1 to M. The program must print the numbers on the balloons remaining after all M
kids burst the balloons in the order of their occurrence. If none of the balloons are remaining then the program must print
-1.

Input Format:
The first line contains N and M separated by a space.
The second line contains N positive integers which denote the numbers on the balloons separated by a space.
The third line contains M positive integers which denote the numbers on the jerseys separated by a space.

Output Format:
The first line contains the numbers on the remaining balloons separated by a space (or -1 if no balloons remain)

Boundary Conditions:
1 <= N <= 9999
1 <= M <= 20

Example Input/Output 1:

Input:
11 3
38 40 11 46 44 48 35 14 39 44 23
2 3 11

Output:
35 23

Explanation:
The 1st kid bursts balloons with numbers which are divisible by 2. So the balloons remaining are 11 35 39 23
The 2nd kid bursts balloons with numbers which are divisible by 3. So the balloons remaining are 11 35 23.
The 3rd kid bursts balloons with numbers which are divisible by 11. So the balloons remaining are 35 23.
