#include<stdio.h>
#include <stdlib.h>

int main()
{
   char a[30];
   scanf("%s",a);
   int aa[10]={0},b[10]={0},i,j;
   for(i=0;i<strlen(a);i++)
   {
       b[(a[i]-'0')]++;
       
   }
   for(i=0;i<10;i++)
   {
       aa[i]=i;
   }
   for(i=0;i<10;i++)
   {
       for(j=0;j<10;j++)
       {
           if(b[i]>b[j])
           {
               int t=b[i];
               b[i]=b[j];
               b[j]=t;
               int aaa=aa[i];
               aa[i]=aa[j];
               aa[j]=aaa;
           }
           else if(b[i]==b[j])
           {
               if(aa[i]<aa[j])
               {
                   int tt=aa[i];
                   aa[i]=aa[j];
                   aa[j]=tt;
               }
           }
       }
   }
   for(i=0;i<10;i++)
   {
      while(b[i]!=0)
       {
           printf("%d",aa[i]);
           b[i]--;
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
