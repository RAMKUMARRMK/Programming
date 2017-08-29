# PRIME-NUMBER-
#include&lt;stdio.h> #include &lt;stdlib.h>  
int main() 
{     
  int a,b,c=0,d;     
  scanf("%d%d",&amp;a,&amp;b);     
  if(a%2==0)     
  {         
    a++;     
  }     
  for(int i=a; i&lt;=b; i=i+2)     
  {         
    d=0;         
    for(int j=2; j&lt;i/2; j++)         
    {             
      if(i%j==0)             
      {                 
        d=1;                 
        break;             
      }         
    }         
    if(d==0)         
    {             
      c++;         
    }     
  }     
  printf("%d",c);  
}
