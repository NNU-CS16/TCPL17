#include<stdio.h>

int main()
{
    int n,i,j,r;
    int m,p=1,s=1,o;
    char c;
    scanf("%d %c",&n,&c);
    
    while (n>=s)
    {
    p=p+2;
    s=s+2*p ;
    }
    m=p-2;
    p=p-2;
    o=p-2;    
    for(i=1;i<=(m+1)/2;i++)
    {
      for (j=1;j<=13-o;j++)
         printf(" ");
      for (r=1;r<=p;r++)
        printf("%c",c);
        printf("\n");
        p=p-2;
        o=o-1;
    }
    for (i=2;i<=(m+1)/2;i++)
    {
       for (j=1;j<=13-i;j++)
          printf(" ");
       for (r=1;r<=2*i-1;r++)
          printf("%c",c);
       printf("\n");
    }
   if(n<s) printf("%d\n",n-(s-2*(m+2)));
  
    
    return 0;
}
