#include"stdio.h"
#include"string.h"
#include<stdlib.h>
int main()
{
  int i,ca=0,cb=0;
  int DAA=0,DBB=0,DA=1,DB=2;
  char A[10]={" "},B[10]={" "};
  scanf("%s %d %s %d",&A,&DA,&B,&DB);
  for(i=0;i<10;i++)
  {
   if(A[i]==DA+'0') 
   ca++;
   if(B[i]==DB+'0')
   cb++;
  }
   if(ca==0)
     DAA=0;
   if(cb==0)
     DBB=0;
   for(i=0;i<ca;i++)
     DAA=DAA*10+DA;
   for(i=0;i<cb;i++)
     DBB=DBB*10+DB;
   printf("%d\n",DAA+DBB);
   return 0;
}
  
