#include<stdio.h>
#include<math.h>
int main()
{
  int a0,a1,a2,a3;
  float a,b,left,right,mid;
  printf("请输入系数a3,a2,a1,a0:");
  scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
  printf("请输入端点a,b:");
  scanf("%f%f",&a,&b);
  left=a3*a*a*a+a2*a*a+a1*a+a0;
  right=a3*b*b*b+a2*b*b+a1*b+a0;
  mid=a3*(a+b)/2*(a+b)/2*(a+b)/2+a2*(a+b)/2*(a+b)/2+a1*(a+b)/2+a0;
  do
  {
     if(abs(left)<1e-6)
     {
        printf("%.2f\n",a);
        break;
     }
     if(abs(right)<1e-6)
     {
        printf("%.2f\n",b);
        break;
     }
     if(abs(mid)<1e-6)
     {
        printf("%.2f\n",(a+b)/2);
        break;
     }
     if(mid*left>0)
          a=(a+b)/2;
     if(mid*right>0)
          b=(a+b)/2;
  }while(left*right<0);
  return 0; 
}
