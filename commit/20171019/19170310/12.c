#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int N,i;
 int a[100000];
 scanf("%d",&N);
 srand(time(0));
 for(i=0;i<N;i++)
 {
  a[i]=rand()%100000+1;
 }
for(i=0;i<N;i++)
if(a[i]>a[i+1])								 
return 0;
}

