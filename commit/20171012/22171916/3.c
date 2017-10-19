#include<stdio.h>
int main()
{
      int sum=0,a,n,num=1,i;
      
      
      scanf("%d%d",&a,&n);
      for(i=0;i<n;i++)
        { 
          if(i==0)
            {
              num=a;
              sum+=num;
            }
          else
            {
              num=num*10+a;
              sum+=num;
            }
        }
printf("sum=%d\n",sum);
return 0;



}
