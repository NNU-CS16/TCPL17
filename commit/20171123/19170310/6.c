#include<stdio.h>
int count_substr(const char* str, const char* substr)
{
    for(i=0;str[i];i++) 
    for(j=i,k=0;substr[k]==str[j];k++,j++) 
    if(substr[k+1]=='\0')
    {  
        num++；
        break; 
     } 
}
int main()
{
    int i,j,k,num=0;
    char str[ ],substr[ ];
    count_substr(const char* str, const char* substr);
    printf("num=%d\n",num);
    return 0;
}
