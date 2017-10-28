#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int N,b[50],i=0,z[9]={0};
    scanf("%ld",&N);
    while(N>0)
    {
        b[i]=N%10;
        N=N/10; 
        switch(b[i])
        {
            case 1: {z[1]++; break;}
            case 2: {z[2]++; break;}
            case 3: {z[3]++; break;}
            case 4: {z[4]++; break;}
            case 5: {z[5]++; break;}
            case 6: {z[6]++; break;}
            case 7: {z[7]++; break;}
            case 8: {z[8]++; break;}
            case 9: {z[9]++; break;}
        }
        i++;
    }
    for(int j=1; j<=9; j++)
    {
        for(int k=j+1; k<=9;k++)
        {
            if(z[j]<z[k])
            {
                int temp=z[k];
                z[k]=z[j];
                z[j]=temp;
            }
        }
        if(z[j]!=0)
        {
            for(int l=1; l<=z[j]; l++)
            {
                printf("%d",j);
            }
        }
    }


}



Question:


A string consists of digits from 1-9 will be passed as input. The program must print the digits sorted based on the number of
occurrence. If one or more digits occur the same number of times, the smallest digit must be printed first.  

Input Format:
The first line will contain the N digits from 1-9

Boundary Conditions:
3 <= N <= 30

Output Format:
The digits sorted based on the number of occurrence.


Example Input/Output 1:

Input:
4443338993

Output:
3333444998

Explanation:
3 occurs the most number of times (four times). Hence it is printed first.
4 occurs thrice and hence printed after the 3s.
9 occurs twice and hence printed after the 4s.
8 occurs only once and hence printed after 9.


Example Input/Output 2:

Input:
95559998228

Output:
99995552288

Explanation:
Here 2 and 8 occurs twice. Hence 2 being the smaller digit is printed before 8.
