#include<stdio.h>
int main()
{
    char A,B,C;
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y)
     printf("C\n");
    if(x==z)
     printf("B\n");
    else  if(y==z)
     printf("A\n");
}


