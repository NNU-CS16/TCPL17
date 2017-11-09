#include <stdio.h>
int main()

{
  int a,b,c;
  printf("输入三条边的长度:a,b,c\n"); 
  scanf("%d%d%d",&a,&b,&c);
  if((a+b)>c&&(a-b)<c)
  {
   if(a==b||a==c||b==c)
   {
     if(a==b&&b==c) 
     {
     printf("等边三角形\n");
     } 
    else{ 
    printf("等腰三角形\n");
    }
   } 
    else
    { 
      printf("普通三角形\n");
    } 
  }
  else
   { 
   printf("不能构成三角形\n");
   }
    
  return 0;
} 
