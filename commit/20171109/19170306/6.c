#include<stdio.h>
void move(char,int,char,int *);
char findfree(char,char);
int main()
{
int n;int * step;*step=0;
	scanf("%d",&n);
	move('A',n,'C',step);
printf("%d\n",*step);
return 0;
}

void move(char begin,int n,char target,int * step)
{
char free=findfree(begin,target);
		if(n==0) return;
		if (free=='B'&&n==1)
			{
			move(begin,n,free,step);
			move(free,n,target,step);
			return;
			}
		if (n==1)		
			{
			printf("%c->%c\n",begin,target);
			(*step)++;
			return;		
			}
move(begin,n-1,target,step);
move(begin,1,free,step);
move(target,n-1,begin,step);
move(free,1,target,step);
move(begin,n-1,target,step);
}

char findfree(char one,char two)
{
if (one!='A'&&two!='A') 
	return 'A';
if (one!='B'&&two!='B')
	return 'B';
else return 'C';
}
