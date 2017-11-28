#include<stdio.h>
void my_strcpy( char* dest,const char* src)
{
    int i=0,j=0;
    while(src[j] != '\0')
    {
    dest[i]=src[j];
    j++;
    i++;
    }
    dest[i]='\0';
}
int main()
{
char a[1000],b[1000];
scanf("%s%s",a,b);
my_strcpy(a,b);
printf("%s\n",a);
return 0;
}
