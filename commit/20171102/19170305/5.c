#include<stdio.h>
#include<math.h>
int fac_bit_count(int n);

int main()
{
int n;
scanf("%d",&n);
fac_bit_count(n);
return 0;
}

int fac_bit_count(int n)
{
if(n>12)
printf("Wrong!\n");
else
{
int fac=1,i,j=0;
for(i=1;i<=n;i++)
fac=fac*i;
while(1)
{
if(pow(10,j)<=fac)
{j++;continue;}
else
break;
}
printf("%d\n",j);
}
}

