#include<stdio.h>
#include<string.h>
int substr(const char* str, const char* substr)
{
    int n1=strlen(str);
    int n2=strlen(substr);
    int k=-1;
    int j=0;
    int i;
    for (i=0; i<n1; i++)
    {
    if(substr[j] != str[i]) continue;
    k=i+1;
    for(j=0; j < n2; j++,i++)
    {
    if(substr[j] != str[i]) k=-1;
    }
    if ( k>=0 ) return k;
    }
    return -1;
    
}
int main()
{
    char str[100],sub[100];
    scanf("%s%s",str,sub);
    printf("%d\n",substr(str,sub));
    return 0;
}

