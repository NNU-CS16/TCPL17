#include<stdio.h>
void my_strcpy(char* dest, const char* src);
int main()
{
char src[100],dest[1000];
fgets(dest,1000,stdin);
fgets(src,100,stdin);
my_strcpy(dest,src);
return 0;
}

void my_strcpy(char* dest, const char* src)
{
int i=0,j;
while(*(dest+i)!='\0')
i++;
for(j=0;j<1000-i;j++)
*(dest+i+j-1)=*(src+j);
fputs(dest,stdout);
}
