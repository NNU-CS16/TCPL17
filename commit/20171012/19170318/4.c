#include <stdio.h>

int main()
{

    int i,t=1,total=0;
  
    for (i=1;i<=10;i++)
    {
 
     t=t*i;
     total+=t;

    }

    printf("%d\n",total);

    return 0;

}
