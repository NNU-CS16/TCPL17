#include<stdio.h>
int main()
{
  int n,m,ch[100]={0};
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++)
    scanf("%d",&ch[(i+m)%n]);
  for(int i=0;i<n;i++)
  {
    if(i>0) printf(" ");
    printf("%d",ch[i]);
  }
  return 0;
}
