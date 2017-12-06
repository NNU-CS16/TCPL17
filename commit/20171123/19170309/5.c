#include<stdio.h>
int su( char *str, char *substr);
int main()
{

char str[100];
char substr[100];
printf("请输入字符串：\n");
scanf("%s", str);
printf("\n");    
scanf("%s", substr);
printf("%d", su(str, substr)); 

return 0;
}
int su( char *str,  char *substr)
{
int i=0,j=0,k,x;
x=sizeof (substr)/sizeof (substr[0]);

while(substr[j]!=str[i])
    i++;
k=i+1;
while(substr[j]==str[i])
    {i++;
     j++;}

return x;
}
   
