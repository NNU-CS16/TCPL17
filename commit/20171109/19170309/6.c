#include<stdio.h>
int move(int,char,char,int*);
char judge(char,char);

int main()
{
int n;
int *s;
*s=0;
scanf("%d",&n);
move(n,'A','C',s);
printf("%d\n",*s);
return 0;
}

int move(int n,char location,char target,int *s)
{
char free='B';
free=judge(location,target);
if(n==1)
{
if((location=='A'&&target=='C')||(location=='C'&&target=='A'))
{printf("%c->%c\n%c->%c\n",location,free,free,target);(*s)+=2;}
if(target=='B')
{printf("%c->%c\n",location,target);(*s)++;}
if(location=='B')
{printf("%c->%c\n",location,target);(*s)++;}
}
else
{
move(n-1,location,target,s);
move(1,location,free,s);
move(n-1,target,location,s);
move(1,free,target,s);
move(n-1,location,target,s);
}

return *s;
}


char judge(char location,char target)
{
char free;
if(location=='A')
{
   if(target=='B')
   return 'C';
   else
   return 'B';
}
else if(location=='B')
{
   if(target=='A')
   return 'C';
   else
   return 'A';
}
else
{
   if(target=='A')
   return 'B';
   else
   return 'A';
}
}
