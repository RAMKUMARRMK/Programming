#include<stdio.h>
#include <stdlib.h>

int main()
{   
    char a[500],b[500],c[500];
    scanf("%s%s",&a,&b);
    int j=strlen(b)-1;
    for(int i=0; i<strlen(b); i++)
    {
        c[j]=b[i];
        j--;
    }
    for(int i=0; i<strlen(a);i++)
    {
        if(a[i]==c[i])
        {
            printf("%c",a[i]);
        }
    }
    //printf("\n%s\n",b);
    //printf("%s",c);

}


Question: 
