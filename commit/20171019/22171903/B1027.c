#include<stdio.h>
int main()
{
    int a,b,d,e,f,i,j,k;
    char c;
    scanf("%d %c",&a,&c);
    if (a<7)
    {
       for(i=1;i<80;i++)
       {
           printf(" ");
       }
       printf("%c\n",c);                                                  
       printf("%d\n",a-1);
    }
    else
    {
        for(b=1,d=1,e=1;a-b>=2*(d+2);e++)
 	{
  	   d=d+2;
	   b=b+2*d;
	}   
	f=d;
	for(i=1;i<=e;i++)
	{
	   for(j=1;j<(f+1)/2-(d-1)/2;j++)
	       printf(" ");
           for(k=1;k<=d;k++)
               printf("%c",c);
	       printf("\n");
	       d=d-2;
	}
        for(i=1,d=3;i<=e-1;i++)
	{
	   for(j=1;j<(f+1)/2-(d-1)/2;j++)
	      printf(" ");
	   for(k=1;k<=d;k++)
	      printf("%c",c);
 	      printf("\n");
  	      d=d+2;
	}
  	if(a-b!=0)
        {
           printf("%d\n",a-b);   
        }
    }
    return 0;
}
