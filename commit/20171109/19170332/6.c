#include<stdio.h>
int time=0;
void move(char source,char target);
void hanoi(int n,char source,char help,char target);

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    printf("%d\n",time);
    return 0;
}

void move(char source,char target)
{
    printf("%c->%c\n",source,target);
    time++;
}

void hanoi(int n,char source,char help,char target)
{
   if(n==1)
   {
       if(source=='A'&& target=='C')
        {
           move(source,help);
           move(help,target);
        }
        else
          move(source,target);
   }
   else
   {
       hanoi(n-1,source,target,help);
       if(source=='A'&& target=='C')
       {
          move(source,help);
          move(help,target);
       }
       else
          move(source,target);
       hanoi(n-1,help,source,target);
   }
}
