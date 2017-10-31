#include<stdio.h>
int main()
{
    int a=0,b=0;
    char c;
    do
    {
        scanf("%c",&c);
        if(c!=' '&&c!='.')
        {
           a++;
        }
        else
	{
     	   if(a)
           {
	     if(b)
 	     {
	       printf(" ");
	     }
             printf("%d",a);
	     b=1;
	   }
	   a=0;
     	}
	if(c=='.')
	break;
    }
    while(1);    
    return 0;
}
