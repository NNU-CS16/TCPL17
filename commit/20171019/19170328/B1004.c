#include<stdio.h>
#include<string.h>
int main()
{
  int N;
  scanf("%d",&N);
  char name[2][11],id[2][11],curname[11],curid[11];
  int grade[2]={-1,101},curgrade;
  for(int i=0;i<N;i++)
  {
   scanf("%s %s %d",curname,curid,&curgrade);
  if(curgrade>grade[0])
  {
   strcpy(name[0],curname);
   strcpy(id[0],curid);
   grade[0]=curgrade;
}
   if(curgrade<grade[1])
  {
    strcpy(name[1],curname);
    strcpy(id[1],curid);
    grade[1]=curgrade;
}
}
  printf("%s %s\n%s %s",name[0],id[0],name[1],id[1]);
  return 0;
}
