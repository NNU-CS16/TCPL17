#include<stdio.h>
#include<math.h>
int main()
{
        int n,i=0,b,m;
        int a[100];
        int j;
        scanf("%d",&b);
        if(b<0)
        {
                printf("fu ");
        }
        b = fabs(b);
        if(b==0)
        {
                printf("ling");
        }
        else
        {
                while(b!=0)
                {
                        a[i++] = b%10;
                        b /= 10;
                }
                for(j=i;j>0;j--)
                {
                                switch (a[j-1]){
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
                                if(j-1 != 0){
                                        printf(" ");
                                }
                }
        }
        return 0;
}
                  
