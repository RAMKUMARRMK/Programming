#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>64 && a<91)
    {
        printf("%c-%c",a,a+32);
    }
    else if(a>96 && a<122)
    {
        printf("%c-%c",a,a-32);
    }
}



Question:


The program must accept an alphabet X and toggle the case (convert upper case to lower case and vice versa).

Input Format:
The first line denotes the value of character X.

Output Format:
The first line contains the characters X and the toggled case character separated by a hyphen.

Boundary Conditions:
X is from a to z

Example Input/Output 1:

Input:
d
Output:
d-D

Example Input/Output 2:

Input:
Y
Output:
Y-y
