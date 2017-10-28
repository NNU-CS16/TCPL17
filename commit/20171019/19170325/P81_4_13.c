#include<stdio.h>
#include<math.h>

int main()

{

int n,i;

printf("please input n(n>3):");

scanf("%d",&n);

for(i=2;i<=sqrt(n);i++)
{
  if(n%i==0)
    {
     printf("%d不是素数。\n",n);

     break;
    }
}

  if(i>sqrt(n))

    printf("%d是素数。\n",n);

  return 0;
}
