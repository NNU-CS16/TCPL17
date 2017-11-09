#include<stdio.h>
void reverse(char* str);

int main()
{
char* str;
reverse(str);
return 0;
}

void reverse(char* str)
{
char c;
char x[100];
int i=0,j;
while(c!='\n')
{
scanf("%c",&c);
x[i]=c;
i++;
}
j=i;
for(i=j-2;i>=0;i--)
printf("%c",x[i]);
printf("\n");
}
