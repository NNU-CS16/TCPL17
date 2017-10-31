#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入一个整数：");
    scanf("%d",&a);
    
    if(a<0)
      printf("fu "),a=-a;
      
    c=1;
    b=a;
    while(b>9)
    {
        b=b/10;
        c=c*10;
    }
    do{  
        d=a/c;  
        switch(d){  
                  case 0:printf("ling");break;  
                  case 1:printf("yi");break;  
                  case 2:printf("er");break;  
                  case 3:printf("san");break;  
                  case 4:printf("si");break;  
                  case 5:printf("wu");break;  
                  case 6:printf("liu");break;  
                  case 7:printf("qi");break;  
                  case 8:printf("ba");break;  
                  case 9:printf("jiu");break;  
                 }  
        if(c>9)printf(" ");  
        a=a%c;  
        c=c/10;  
      }
    while(c>0);  
    printf("\n");  
      
    return 0;  
}
