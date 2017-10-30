#include <stdio.h>  
int main()  
{  
  int m,n,s;  
  scanf("%d%d%d",&m,&n,&s);  
    if(m==n)  
    printf("C\n");  
  else  
  {  
    if(m==s)  
      printf("B\n");  
    else  
      printf("A\n");  
  }  
  return 0;  
}  
