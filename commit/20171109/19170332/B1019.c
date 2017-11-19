#include<stdio.h>
int first(int m);
int second(int m);
int main()
{
  int m;
  scanf("%d",&m);
  if (first(m)==second(m))
     printf("%d-%d=0000\n",first(m),second(m));
  else 
    int n;
     n=first(m)-second(m);
     printf("%d-%d=%d\n",first(m),second(m),n);
     if(n==6174)
        break;
     else
          m=n;
     do 
         n=first(m)-second(m);
         printf("%d-%d=%d\n",first(m),second(m),n);
     while (n=6174);
  return 0;
}
int first(int m);
{
int a,b,c,d;
a=m%10;
b=(m/10)%10;
c=(m/100)%10;
d=(m/1000)%10;
char a[];
int i=1;
for(i=1;i<=4;i++){
  a[i]=m%10;
  m/=10;}
int temp;
  if (a[i]>=a[i+1]){
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
return ;
}

        
