#include<stdio.h>
void moveft(int,char,char);
char judge(char,char);

int main()
{
int n;
scanf("%d",&n);
moveft(n,'A','C');
return 0;
}

void moveft(int n,char location,char target)
{
char free='B';
free=judge(location,target);
if(n==1)
printf("%c->%c\n",location,target);
else
{
moveft(n-1,location,free);
moveft(1,location,target);
moveft(n-1,free,target);
}
}

char judge(char location,char target)
{
char free;
if(location=='A')
  {if(target=='B')
    return 'C';
   else
    return 'B';
   }
else if(location=='B')
  {if(target=='A')
     return 'C';
   else
     return 'A';
   }
else
  {if(target=='A')
    return 'B';
   else
    return 'C';
  }
}
