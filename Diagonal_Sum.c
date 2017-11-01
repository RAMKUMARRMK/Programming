#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b[1000][1000],c=0,e=0;
    scanf("%d",&a);
    int d=a-1;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d",&b[i][j]);
            if(i==j)
            {
                e=e+b[i][j];
                b[i][j]=0;
            }
            if(i==c && j==d)
            {
                e=e+b[i][j];
                c++;
                d--;
            }
        }
    }
    printf("%d",e);

}



Question:


A set of numbers forming a matrix N*N is passed as input. The program has to print the sum of numbers along the diagonals.

Input Format:
The first line will contain the value of N.
The next N lines will contain N numbers each separated by one or more spaces.

Boundary Conditions:
2 <= N <= 10
Value of a given number in the matrix is from 0 to 99999999.

Output Format:
The sum of the numbers along the diagonals.


Example Input/Output 1:

Input:
3
5 6 7
8 9 1
2 3 4

Output:
27

Explanation:
The sum of the numbers along the diagonal = 5+9+4+7+2 = 27.
Please pay attention in not counting the overlapping number 9 (which is in the middle) twice.


Example Input/Output 2:

Input:
4
2 3 4 5
1 5 3 2
3 3 9 8
9 7 6 5

Output:
41

Explanation:
The sum of the numbers along the diagonal = 2+5+9+5+5+3+3+9 = 41
