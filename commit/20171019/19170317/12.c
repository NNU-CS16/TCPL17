#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
    int N,a[N];
    printf("读入N(<100000):");
    scanf("%d",&N);
    srand(time(NULL));
    a[N]=rand()%100;
    
    int i,j,temp;
    for(i=0;j<N-1;++i)
      for(j=0;j<N-1-i;++j)
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
    printf("该数组的最大值a[N]=%d,最小值a[0]=%d",a[N],a[0]);
    
    int sum=0,aver;
    for(i=0;i<N;++i)
      sum=sum+a[i];
    aver=sum/N;
    printf("和为%d,平均值为%d",sum,aver);

    double vari=0,stddev;
    for(i=0;i<N;++i)
      vari=vari+pow((a[i]-aver),2);
    vari=vari/N;
    stddev=sqrt(vari);
    printf("方差为%lf,标准差为%lf",vari,stddev);

    return 0;
}
