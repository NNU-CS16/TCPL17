#include <stdio.h>
#include <string.h>
int count_substr(const char* str,const char* substr);

int main()
{
        char str[100];
        char substr[100];
        scanf("%s",str);
        scanf("%s",substr);
        printf("%d\n",count_substr(str,substr));
        return 0;
}

int count_substr(const char* str,const char* substr)
{
        int count=0,i,j;
        for(i=0;i<strlen(str);i++)
        {       
                for(j=0;j<strlen(substr);j++,i++)
                {
                       if(str[i]!=substr[j])
                               break;
                }
                if(j=strlen(substr))
                count++;
        }
        return count;
}

