#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100][50];
    int i=0,j;
    while(scanf("%s",str[i])!=EOF)
    {
      ++i;
    }
    for(i=i-1;i>0;--i)
    {
      printf("%s",str[i]);
    }
    printf("%s\n",str[0]);
    return 0;
}
