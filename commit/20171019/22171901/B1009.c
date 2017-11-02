#include<stdio.h>
#include<string.h>
int main()
{
 char s1[81]={'0'};
 char s2[81][81]={'0'};
 int i,j=0,count=0;

 gets(s1);
 for(i=0;i<strlen(s1);i++)//strlen函数：计数器
 {
   if(s1[i]==' ')
    {
     j=0;
     count++;
     continue;
    }
   s2[count][j++]=s1[i];
 }

 
 for(i=count;i>0;i--)
  {
    printf("%s ",s2[i]);
  } 
  printf("%s",s2[0]);
  return 0;

}
