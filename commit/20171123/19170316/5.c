#include<stdio.h>
int Substr(const char* str,const char* substr)
{
	int i,j,k,r;
	int t=0;
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]==' ')
		t++;
	for(k=i,j=0;substr[j]!='\0';j++)
	{
	if(substr[j]==str[k])
		{
		k++;
		r=1;
		}
	else
		{
		r=0;
		break;
		}
	}
	if(r==1)
		return i+1-t;
	}
	return -1;
}
int main ()
{
char str[100],substr[100];
scanf("%[^\n] %s",str,substr);
printf("%d\n",Substr(str,substr));
return 0;
}
