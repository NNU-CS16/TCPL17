#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{	int i,str[100];
	i=strlen(str);
	int k;
	for(k=0;k<(i/2);k++)
	if(str[k]==str[i-k-1])
	return 0;
	else return -1;
}
int main()
{
int str[100];
scanf("%d",str);
printf("%d",is_int_pal(str));
return 0;
}
