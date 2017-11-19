#include<stdio.h>
void print_hex(int a)
{
    int sum=0,n=1;
    int c,b,A,B,C,D,E,F;
    char end;
    c=a/16;
    if(c=0)
      {
       switch (a)
        { case 1:end=1;break;
          case 2:end=2;break;
          case 3:end=3;break;
          case 4:end=4;break;
          case 5:end=5;break;
          case 6:end=6;break;
          case 7:end=7;break;
          case 8:end=8;break;
          case 9:end=9;break;
          case 10:end=A;break;
          case 11:end=B;break;
          case 12:end=C;break;
          case 13:end=D;break;
          case 14:end=E;break;
          case 15:end=F;break;
        }
      }
     else { 
       for(n=1;c!=0;n=n*10);
       b=c%16;
        {
         switch (b)
          { case 1:b=1;break;
            case 2:b=2;break;
            case 3:b=3;break;
            case 4:b=4;break;
            case 5:b=5;break;
            case 6:b=6;break;
            case 7:b=7;break;
            case 8:b=8;break;
            case 9:b=9;break;
            case 10:b=A;break;
            case 11:b=B;break;
            case 12:b=C;break;
            case 13:b=D;break;
            case 14:b=E;break;
            case 15:b=F;break;
          }
        }
       end=sum+b*n;
       }
     printf("输出的十六进制数：%s\n",end);
  }
int main()
{int  a;
scanf("%d",&a);
print_hex( a);
return 0;
}

    
      
