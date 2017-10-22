#include<stdio.h>
int main()
{
      int n,t=1,s=0;
      
      
      for(n=1;n<=10;n++)        
{        t=t*n;
         s+=t;
}      
      printf("1!+2!+...+10!=%d\n",s);
      
      return 0; 
}
