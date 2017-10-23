
#include<stdio.h>
void main()
{
int m,n,d,l=0,p[20]; char c[6]={'a','b','c','d','e','f'};
printf("change a DEN to \"any\"!\n");
printf("Input which u want to get(2,8,16?):\n");
scanf("%d",&d);
printf("Now input a num u to me:\n");
scanf("%d",&m);
if(m/d==0)
{
if(m%d>9) printf("%c",c[m%d-10]);
else printf("%d",m%d);
}
while(m/d>0)
p[l]=m%d,m/=d,l++;p[l]=m;
for(;l>=0;l--)
if(p[l]<10) printf("%d",p[l]);
else
printf("%c",c[p[l]-10]);

}

