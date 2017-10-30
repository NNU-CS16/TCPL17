#include <stdio.h>
int main()
{  
    int m,n,i;
    int a[1000];
    scanf("%d%d",&n,&m);
  
    i=0;
    while (i<n)
{
      
      if (i+m%n<n) scanf("%d",&a[i+m%n]);
      else scanf("%d",&a[i+m%n-n]);
      i++;
      
}
    
    printf("%d",a[0]);
    for (i=1;i<n;i++) printf(" %d",a[i]);             
    
    return 0;
}
