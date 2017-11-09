#include<stdio.h>
#include<string.h>
int main()
{
  int DA,DB,i,numA=0,numB=0;
  float RA=0,RB=0;
  char str1[10];
  char str2[10];
  scanf("%s %d %s %d",str1,&DA,str2,&DB);
  for (i=0;i<10;i++)
  {
    if(str1[i]==DA+48)
      numA++;
    if(str2[i]==DB+48)
      numB++;
  }
  for (i=1;i<=numA;i++)
    RA=RA*10+DA;
  for (i=1;i<=numB;i++)
    RB=RB*10+DB;
  printf("%.0f",RA+RB);
  return 0;
}

