#include<stdio.h>
#include<string.h>
int main()
{
   char nameMax[11],idMax[11],nameMin[11],idMin[11];
   int scoreMax,scoreMin,score;
   char Name[11],Id[11];
   int n;
   scanf("%d",&n);
   scoreMax=-1;
   scoreMin=101;
   for(int i=0;i<n;i++)
{
   scanf("%s %s %d",Name,Id,&score);
   if(score>scoreMax)
{
   strcpy(nameMax,Name);
   strcpy(idMax,Id);
   scoreMax=score;
}
   if(score<scoreMin)
{
   strcpy(nameMin,Name);
   strcpy(idMin,Id);
   scoreMin=score;
}
}
   printf("%s %s\n",nameMax,idMax);
   printf("%s %s\n",nameMin,idMin);
   return 0;
}
