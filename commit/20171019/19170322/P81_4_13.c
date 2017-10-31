#include<math.h>
#include<stdio.h>



int main()
{
  int n,i;
  float j;
  printf("请输入n(n>3): ");
  scanf("%d",&n);
  j = sqrt(n);
  for(i=2;i<j;i++)
	  if(n%i==0)
		  break;
      if(i<j)
	      printf("%d不是素数\n",n);
      else
	      printf("%d是素数\n",n);
      return 0;

}
