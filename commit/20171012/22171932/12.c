#include <stdlib.h>
int main()
{
    int x,y,i;
    scanf("%d/%d",&x,&y);

        for(i=y;i>=2;i--){
            if(x%i==0&&y%i==0){
               x=x/i;
               y=y/i;
            }
        }
      printf("%d/%d",x,y);
    return 0;
}
