#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main(int argc, char** argv)
{
char a[100000],b[2000];

int n,m,i,j=0,k=0,l1,l2,p,q,z=0,f;
cin>>n;
cin>>m;
char c[n][m];
cin>>a;
cin>>b;
l1=strlen(a);
l2=strlen(b);
while(k<n)
{
    for(i=0;i<l1&&k<n;i++)
    {
       if(j<m&&k<n) 
       c[k][j++]=a[i];
       else 
       {
           k++;
           j=0;
           c[k][j++]=a[i];
       }
    }
   if(l1%m==0)
    {
    j=0;
    k++;
}
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(c[i][j]==b[0])
    {
        f=0;
        q=j;
        if(q+l2-1<m)
        {
        for(p=0,q=j;p<l2;p++,q++)
        {
            if(b[p]!=c[i][q])
            {
                f=1;
                break;
            }
        }
        }
        else
        {
            f=1;
        }
        if(f==0)
        z++;
    }
    }
}
for(j=0;j<m;j++)
{
    for(i=0;i<n;i++)
    {
        if(c[i][j]==b[0])
        {
            f=0;
            q=i;
            if(q+l2-1<m)
            {
            for(p=0,q=i;p<l2;p++,q++)
            {
                if(b[p]!=c[q][j])
                {
                    f=1;
                    break;
                }
            }
            }
            else
            {
                f=1;
            }
            if(f==0)
            z++;
        }
    }
}
if(l2>m)
z=0;
cout<<z;

}



Question:


Given two strings S1 and S2, form a R*C matrix with the string S1 (You may repeat the string S1 to fill in the rest of the
matrix, if length of S1 is less than R*C). Then search for the string S2 along rows from left to right or along columns from top
to bottom) and print the number of occurrence of S2.

Input Format:
The first line contains R and C separated by a space.
The second line contains S1.
The third line contains S2.

Output Format:
The first line contains the integer value denoting the number of occurrence of S2 in the character matrix formed.

Boundary Conditions:
2 <= R, C <= 100
2 <= Length of S1 <= 10000
2 <= Length of S2 <= 200


Example Input/Output 1:

Input:

5 4
managermetuatten
man

Output:

3

Explanation:

The 5*4 character matrix formed using S1 is
mana
germ
etua
tten
mana
man can be found in 1st row from left to right and in 4th column from top to bottom. Then it is also found in 5th row. Hence
the overall occurrence count is 2
