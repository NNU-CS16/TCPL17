#include<stdio.h>
void move(char,int,char,int *);
char findfree(char,char);
int main()
{
int n;int * step;*step=0;
	scanf("%d",&n);
	move('A',2*n,'C',step);
printf("%d\n",*step);
return 0;
}

void move(char begin,int n,char target,int * step)
{
	if (n==2)
		{
		printf("%c->%c\n",begin,target);
		printf("%c->%c\n",begin,target);
		(*step)++;(*step)++;return;
		}
	move(begin,n-2,findfree(begin,target),step);
	move(begin,2,target,step);
	move(findfree(begin,target),n-2,target,step);
}

char findfree(char one,char two)
{
if (one!='A'&&two!='A') 
	return 'A';
if (one!='B'&&two!='B')
	return 'B';
else return 'C';
}
