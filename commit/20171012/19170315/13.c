#include <stdio.h>

int main()
{
int x, i, a[30], c;
printf("%d",x);
scanf("%d\n",&x);

printf("%d的八进制形式:%o\n",x,x);
printf("%d十六进制形式:%x\n",x,x);
printf("%d的er进制形式:",x);

for(c=0;x!=0;x=x/2)
 {
  i=x%2;
  a[c]=i;
  c++;
 }
for(c=c-1;c>=0;c--)
 {
  printf("%d",a[c]);
 }

printf("\n");
return 0;
}
