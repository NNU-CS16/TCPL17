#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("a=%d,b=%d\n",a,b);
int c;
c=a;
a=b;
b=c;
/*a=3,b=5;
 *a=a^b;b=b^a;a=a^b;
 */
printf("a=%d,b=%d\n",a,b);
return 0;
}
