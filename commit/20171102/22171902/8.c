#include<stdio.h>
int LCM(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",LCM(m,n));

    return 0;
}

int LCM(int m,int n)
{
 int t,lea,lea2,temp;
 if(m==n)
  return m;
 else if(m<n)//保证m>=n
    {
       temp=n;
       n=m;
       m=temp;
    }
 if(m%n==0)
  return m;
    t=m;
    for( ; ;t++)
   {
    lea=t%n;
    if(lea==0)
    {
        lea2=t%m;
        if(lea2==0)
        {
            return t;
            break;
        }
    }
   }
 }




