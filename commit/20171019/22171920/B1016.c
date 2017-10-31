#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char a[15],b[15],c,d;  
    long s=0,i;
    printf("输入A、DA、B、DB,中间以空格分隔,其中0<A,B<1010\n");  
    scanf("%s %c %s %c",a,&c,b,&d);  
    for(i=0;i<strlen(a);i++)  
    {  
      if(a[i]==c)  
         s=s*10+c-'0';  
    }  
      long y=0;  
      for(i=0;i<strlen(b);i++)  
        {  
            if(b[i]==d)  
            y=y*10+d-'0';  
        }  
        printf("%ld\n",y+s);  
        return 0;  
    }  
