#include<stdio.h>


int main()
{
   int b,i,c=0,a[30];
    printf("Please input b:");
    scanf("%d",&b);
    
    printf("%o\n",b);
    printf("%x\n",b);
    
    while(b!=0)
    {
	 i=b%2;
	 a[c]=i;
	 c++;
	 b=b/2;
    }
    c--;
    for(;c>=0;c--)
    {
	 printf("%d",a[c]);
    }
    printf("\n");
    return 0;
}

