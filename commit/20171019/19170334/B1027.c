#include <stdio.h>
int main()
{
	int a;
  int m=1;
  char b;
  scanf("%d %c",&a,&b);
  while((m+1)*(m+1)/2-1<=a)
    m+=2;
  m-=2;
for(int i=0;i<m;++i)
{for(int j=0;j<m-i||j<i+1;++j){
  if(j>=i||j>=m-1-i)
    putchar(b);
  else putchar(' ');
}
 putchar('\n');
}
  printf("%d\n",a-(m+1)*(m+1)/2+1);
return 0;
}
