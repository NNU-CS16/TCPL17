#include<stdio.h>
int main()
{
  long long int A,B;
  int D;
  int a,t,i=0;

  int sum[1000]={0};
  scanf("%ld %ld %d",&A,&B,&D);
  t=A+B;
  if(D>0&&D<=10)
  {
        while(t)
    {
      sum[i++]=t%D;
      t/=D;
    }
    for(--i;i>=0;i--)
    printf("%d",sum[i]);

    return 0;



  }

}

