#include<stdio.h>
#include<stdlib.h>
int main()
{
   struct student{ 
   char name[11];
   char number[11];
   int grade;
   }
   struct student *ps;
   int i,N;
   int max=-1,min=101;
   int cmax,cmin;
   scanf("%d",&N);
   if(N<0)
   goto err_exit;
   ps=(struct student *)malloc(N * sizeof(struct student));
   if(ps ==NULL)
   goto err_exit;
   for(i=0;i<N;i++)
   {
   scanf("%s %s %d",ps[i].name,ps[i].number,&(ps[i].grade));
   }
   for(i=0;i<N;i++)
   {
   if(ps[i].grade<min)
    {cmin=i;
     max=ps[i].grade;
   }
  }
  printf(%s %s\n",ps[cmax].name,ps[cmax].number);
  printf("%s %s\n",ps[cmin].name,ps[cmin].number);
  free(ps);
  err_exit;
  return 0;
} 
   
