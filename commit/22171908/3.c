#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x<0)
    {
        printf("fu ");
        x*=-1;
    }
    int a,b=1;
    a=x;
    while(a>9)
    {
    a/=10;
    b*=10;
    }
    int y;
    while(b>0)
    {
    y=x/b;

         switch(y)
       {
            case 0:
                  printf("ling");break;
            case 1:
                  printf("yi");break;
            case 2:
                  printf("er");break;
            case 3:
                  printf("san");break;
            case 4:
                  printf("si");break;
            case 5:
                  printf("wu");break;
            case 6:
                  printf("liu");break;
            case 7:
                  printf("qi");break;
            case 8:
                  printf("ba");break;
            case 9:
                  printf("jiu");break;
       }
    if(b>9)
    {
    printf(" ");
    }
    x%=b;
    b/=10;
    }
          return 0;
}



