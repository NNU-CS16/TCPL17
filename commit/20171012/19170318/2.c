#include <stdio.h>

int main()
{

    int i,total=0;
  
    for (i=1;i<98;i+=3) total+=i*(i+1)*(i+2);

    printf("%d\n",total);

    return 0;

}
