#include <stdio.h>
int main()
{
  int n=0;
  int score=0;
  int score_high=0;
  int score_low=101;
  char name[10]={0};
  char name_low[10]={0};
  char name_high[10]={0};
  char id[10]={0};
  char id_low[10]={0};
  char id_high[10]={0};
scanf("%d",&n);
int i;
  for(i=0;i<n;i++)
  {
   scanf("%s%s%d",name,id,&score);
   if(score>score_high)
    {
     score_high=score;
     sprintf(name_high,"%s",name);
     sprintf(id_high,"%s",id);
    }
   if(score<score_low)
    {
     score_low=score;
     sprintf(name_low,"%s",name);
     sprintf(id_low,"%s",id);
    }
  }
  printf("%s %s\n",name_high,id_high);
  printf("%s %s\n",name_low,id_low);
       return 0;
}
