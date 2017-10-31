#include<stdio.h>
#include<math.h>
int main()
{
  int m,n,i;
  printf("请输入n(n>3):");
  scanf("%d",&n);
  m=sqrt(n);
  for(i=2;i<=m;i++)

    if(m%i==0)
      break;
    if(i<m)
      printf("%d不是素数\n",n);
    else
      printf("%d是素数\n",n);

    return 0;
}
