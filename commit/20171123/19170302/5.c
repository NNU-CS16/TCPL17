#include <stdio.h>
#include <string.h>

int count_substr (const char* str,const char* substr);

int main()
{
        char str[50];
        char substr[50];
        scanf("%s",str);
        scanf("%s",substr);
        printf("%d",count_substr(str,substr));
        return 0;
}

int count_substr (const char* str,const char* substr)
{
        int m=strlen(str);
        int n=strlen(substr);
        int i,j,k;
        for(i=0;i<m;i++)
        {
                if(str[i]==substr[0])
                {
                        k=i;
                        break;
                }
        }
        if(i==m)
                return -1;
        for(j=0;j<n;j++,k++)
        {
                if(str[k]!=substr[j])
                        return -1;
        }
        return i+1;
}


        

        

