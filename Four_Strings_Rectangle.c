#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100],b[100][100];
    int i,j,k=0,kkk1,kkk2,l1,l2,l3,p;
    for(i=0; i<4; i++)
    {
        scanf("%s",a[i]);
    }
    strcpy(b[0],a[0]);
    for(i=0; i<4; i++)
    {
        if(a[0][0]==a[i][strlen(a[i])-1])
        {
            strcpy(b[1],a[i]);
            kkk1=i;
        }
        if(a[0][strlen(a[0])-1]==a[i][0])
        {
            strcpy(b[2],a[i]);
            kkk2=i;
        }
    }
    for(i=1; i<4; i++)
    {
        if(i!=kkk1&&i!=kkk2)
        {
            strcpy(b[3],a[i]);
        }
    }
    printf("%s\n",b[0]);
    l1=strlen(b[1])-2;
    l2=1;
    l3=strlen(b[3])-2;
    for(i=1; i<strlen(b[1]); i++)
    {
        for(j=0; j<strlen(a[0]); j++)
        {
            if(j==0)
            {
                printf("%c",b[1][l1]);
            }
            else if(j==strlen(a[0])-1)
            {
                printf("%c",b[2][l2]);
            }
            else
            {
                if(i==strlen(b[1])-1)
                {
                    printf("%c",b[3][l3]);
                    l3--;
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
        l1--;
        l2++;
    }
}



Question:


Four strings out of which two have the same length L1 and the remaining two have the same length L2 are passed as the
input to the program. The four strings must be printed in a L1*L2 rectangular matrix shape as shown in the example
input/output.

L1 >= L2 and a string with L1 must appear on the top of the rectangle. The string which is on the top with length L1 will
always be the first string in the input. Other three strings can occur in a random order in the input. The sequence of the
string can be identified by the fact that the last letter of a string will be the first letter of another string (and you can safely
assume the last letter will not occur more than once).

Input Format:
The first line contains the string which represents the top of the rectangular matrix.
The next three lines will contain the remaining the three string values which can represent the right, left and bottom side of
the rectangle, but not necessarily in the same order.

Output Format:
The L1*L2 rectangular matrix with these four strings as it's sides as described in the Example Input/Output.

Boundary Conditions:
3 <= L1, L2 <= 100
L1 >= L2


Example Input/Output 1:

Input:

MANAGE
SUM
TAURUS
EAT

Output:

MANAGE
U****A
SURUAT
