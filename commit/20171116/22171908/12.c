#include<stdio.h>
#include<string.h>
int my_strcmp(const char *str1, const char *str2);
int main()
{
    char str1[1000],str2[1000];
    scanf("%s%s/n",&str1,&str2);
    printf("%d\n",my_strcmp(str1,str2));
    return 0;
}

int my_strcmp(const char *str1, const char *str2)
{
    int ret;
      while(!(ret=*(unsigned char)str1-*(unsigned char)str2))&&(*str1!='\0'))
     {
           str1++;
           str2++; 
     }
   
     if(ret<0)
            retrun -1;
     else
          if(ret>0)
                  return 1;
}
