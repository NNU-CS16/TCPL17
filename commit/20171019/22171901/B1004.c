#include<stdio.h>
#include<stdlib.h>
 
int main()
{
  int n=0,score=0;
  int score_hight=0;
  int score_low=0;
  
  char name[10]={0};
  char name_low[10]={0};
  char name_hight[10]={0};

  char xh[10]={0};
  char xh_low[10]={0};
  char xh_hight[10]={0};

  scanf("%d",&n);
  
  int i;
  for(i=0;i<n;i++)
   {
    scanf("%s%s%d",&name,&xh,&score);
     if(score>score_hight)
       {
        score_hight=score;
       sprintf(name_hight,"%s",name);
       sprintf(xh_hight,"%s",xh);
        }

     if(score<score_low)
    {
     score_low=score;
     sprintf(name_low,"%s",name);
     sprintf(xh_low,"%s",xh);
    }
   }
 
   printf("%s %s\n",name_hight,xh_hight);
   printf("%s %s\n",name_low,xh_low);
 
  return 0;
}
 
