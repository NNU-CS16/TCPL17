#include<stdio.h>
void reverse(char *p,int n)
{
  int i;
  char temp;
  for(i=0;i<n/2;i++);
  {
    temp=p[i];
    p[i]=p[n-1-i];
    p[n-1-i]=temp;
  }
}
int main()
{
   int i,n;
  
   scanf("%d",&n);
   char c[n];                                                                                        
   for(i=0;i<n;i++)
   {
     scanf("%s",&c[i]);
   }
//   reverse(c,n);
   
  for(i=0;i<n;i++)
  {
   printf("%s",c[i]);
  }

  printf("\n");
  return 0;
}

