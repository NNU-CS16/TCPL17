#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch= '0';
    int cnt = 0;
    while(ch != '.')
   {
        scanf("%c",&ch);
        if (ch == '.'){
            printf("%d",cnt);
            break;
        }
        else if (ch != ' '){
            cnt++;
        }
        else {
            if (cnt != 0){
                printf("%d ",cnt);
                cnt = 0;
            }
            else{
                continue;
            }
        }

    }
    return 0;
}
