#include<stdio.h>
void k_reverse(char* str, int k);

int main()
{
char *str;
int i=0,k;
scanf("%d",&k);
scanf("%s",str);
k_reverse(str,k);
return 0;
}

void k_reverse(char *str,int k)
{
int i,j,num=0,t;
char temp;
while(*(str+i)!='\0')
{i++;num++;}
t=(num-1)-(num-1)%k;
for(i=0;i<=t-k;i+=k)
for(j=i;j<=i+k/2;j++)
{
temp=str[j];
str[j]=str[2*i+k-1-j];
str[2*i+k-1-j]=temp;
}
for(i=0;i<num;i++)
printf("%c",str[i]);
printf("\n");
}

