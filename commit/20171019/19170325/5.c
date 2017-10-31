#include<stdio.h>

int main()
{
    char c;

    int i=0;

    printf("please input sentence:\n");

    scanf("%c",&c);

    while(c!='.')

    {

       if(c!=' ')

         i++;

       else  {printf("%d ",i);i=0;}

       scanf("%c",&c);

     }
    if(c=='.') 

        printf("%d\n",i);

    return 0;
 
}
