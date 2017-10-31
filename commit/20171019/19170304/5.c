#include <stdio.h>
#include <stdbool.h>

int main()
{

    
    char ch;
    int cnt;
    bool flag;
    
    flag = false;
    cnt = 0;
    while((ch = getchar()) && ch != '.')
    {
        if(ch != ' ')
            cnt++;
        else if(cnt != 0)
        {
            if(flag)
                printf(" ");
            printf("%d", cnt);
            flag = true;
            cnt = 0;
        }
    }
    if(cnt != 0)
    {
        if(flag)
            printf(" ");
        printf("%d\n", cnt);
    }

    
    return 0;
}
