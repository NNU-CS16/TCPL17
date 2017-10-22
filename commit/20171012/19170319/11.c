#include<stdio.h>
int main()
{
  int start,end;
  int i,j,m;
  int n;
  int x=0;
  printf("please enter start");
  scanf("%d",&start);
  end=start+4;
  for(i=start;i<end;++i)
      {
        for(j=start;j<end;++j)
           {
             if(j==i)
              continue;
              for(m=start;m<end;++m)
               {
                if(m==i)continue;
                if(m==j)continue;
                n=i*100+j*10+m;
                printf("%d ",n);
                ++x;
                if(x%6==0)
                printf("\n");
               }
           }
      }
  return 0;      
}
