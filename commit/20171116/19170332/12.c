#include<stdio.h>
int my_strcmp(const char* str1, const char* str2)
{
  while((*str1)&&(*str1==*str2))
   {str1++;
    str2++;
   }
   if(*(unsigned char*)str1>*(unsigned char*)str2)
    {
       return 1;
    }
   else if(*(unsigned char*)str1<*(unsigned char*)str2)
  {
       return -1;
  }
   else 
   {
       return 0;
   }
}
int main()
{
   const char* str1;
   const char* str2;
   scanf("%s%s",&str1,&str2);
   printf("%d",my_strcmp(str1,str2));
   return 0;
}

