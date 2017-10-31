#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
int N;
int i,p,sum;
float ave,s2,s,t;
scanf("%d",&N);
int arr[N]; 
 srand(time(NULL));
   for(i=0;i<N;i++)
     { arr[i]=rand()%(N-1)+1;
      printf("%d,%d  ",arr[i],i);}
printf("\n");
   for(p=0,i=0;i<N;i++)
   {
      if(arr[p]>=arr[i])
       { p=p;
         arr[p]=arr[p];
         continue;}
      else
      {p=i;
       arr[p]=arr[i];
       continue;}
   }
printf("%d %d\n",arr[p],p);
   for(p=0,i=0;i<N;i++)
   {
      if(arr[p]<=arr[i])
      {p=p;arr[p]=arr[p];
      continue; }
      else
      {p=i;arr[p]=arr[i];continue;}
   }
printf("%d %d\n",arr[p],p);
for(sum=0,i=0;i<N;i++)
sum=sum+arr[i];
printf("sum=%d\n",sum);

ave=(float)sum/N;
printf("ave=%f\n",ave);

for(t=0,i=0;i<N;i++)
t=t+(arr[i]-ave)*(arr[i]-ave);
s2=t/N;
printf("s2=%f\n",s2);

s=sqrt(s2);
printf("s=%f\n",s);
return 0;
}
