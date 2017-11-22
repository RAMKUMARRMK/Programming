#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100],d=' ';
    int z=0;
    while(d==' ')
    {
        scanf("%s%c",&a[z],&d);
        z++;
    }
    int c=0;
    for(int j=0; j<z; j++)
    {
        int b=strlen(a[j]);
        for(int i=0; i<b ;i++)
        {
            if(i%2==0)
            {
                a[j][i]=toupper(a[j][i]);
            }
            else
            {
                a[j][i]=tolower(a[j][i]);
            }
        }
        printf("%s ",a[j]);
    }
}



Question:

A string S (only alphabets) is passed as input. The printed output should contain alphabets in odd positions in each word in
uppercase and alphabets in even positions in each word in lowercase.

Input Format:
The first line will contain S.

Output Format:
The first line will contain the resultant string value based on the conditions provided.

Boundary Conditions:
Length of S is from 3 to 100.


Example Input/Output 1:

Input:
tREE GiVES us fruiTS

Output:
TrEe GiVeS Us FrUiTs


Example Input/Output 2:

Input:
FLoweR iS beauTIFUL

Output:
FlOwEr Is BeAuTiFuL
