#include<stdio.h>
#include <string.h>
int main ()
{
    int count = 0;
    char n;
    int flag=0;
    int x=1,y=0;
    while((n = getchar()) != '.') {
        if (n != ' ') {
            count ++;
            flag=1;
            continue;
        }
        else
           {
           if (count > 0 ) {
           if (x){
           printf("%d", count);
           x=0;
           y++;
           }
           else{
            printf(" %d",count);
            y++;
           }

                count = 0;
            }
        }
    }
    if (flag){
     if (count > 0) {
     if (y!=0)
        printf(" %d\n", count);
        else{
            printf("%d\n",count);
        }
    } else {
        printf("\n");
    }
    }
    else{
        return 0;
    }

    return 0;
}
