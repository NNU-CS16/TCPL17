#include<stdio.h>
#include<string.h>

void k_reverse(char* str, int k)
{
	char *p=str,*q=str+k-1,temp;
	char *m=NULL,*n=NULL;
	while(q<str+strlen(str))
	{
		m=p;
		n=q;
		while(m<n)
		{
			temp=*m;
			*m=*n;
			*n=temp;
			m++;
			n--;
		}
		p+=k;
		q+=k;
	}
}


int main()
{
	char str[ ]="HelloWorld";
	int k=3;
	k_reverse(str,k);
	puts(str);
	return 0;
}
