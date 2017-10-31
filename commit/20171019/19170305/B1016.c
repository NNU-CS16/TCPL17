#include<stdio.h>
#include<math.h>
int main()
{
int a,b,DA,DB,PA=0,PB=0;
int l,i,j;
scanf("%d %d %d %d",&a,&DA,&b,&DB);
for(l=0;pow(10,l)<=a;l++)
   for(i=0;i<=l;i++)
   {
      if(a%10==DA)
         PA=PA*10+DA;
         a=(a-a%10)/10;
      continue; 
   }


for(l=0;pow(10,l)<=b;l++)
   for(i=0;i<=l;i++)
   {
      if(b%10==DB)
         PB=PB*10+DB;
         b=(b-b%10)/10;
      continue;
   }
printf("%d\n",PA+PB);
return 0;
}
