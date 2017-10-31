#include<stdio.h>
int main()
{
int a,b,da,db,pa,pb;
printf("输入在一行中依次给出A、DA、B、DB，其中0 < A, B < 1010:");
scanf("%d%d%d%d",&a,&da,&b,&db);
pa=0;
pb=0;
while(a){
  if(a%10==da){
     pa=pa*10+da;}
  a/=10;
        }
while(b){
  if(b%10==db){
     pb=pb*10+db;}
  b/=10;
        }

printf("PA + PB的值=%d\n",pa+pb);
return 0;
}

