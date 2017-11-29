#include<stdio.h>
#include<string.h>
void k_reverse(char* str,int k);
int main()
{
    char str[100];
    int k;
    scanf("%d %s",&k,str);
    k_reverse(str,k);
    printf("%s\n",str);
    return 0;
}
void k_reverse(char* str,int k)
{
    int count=0,i=0;
    while(str[i]!='\0')
      {
            if(str[i]>='0'&& str[i]<='9')
              count++;
      }
      printf("%d",count);
    int a,s,n,temp;
    s=a/k;
    for(n=0;n<s,n++)
    {
        for(i=k*n;i<k*(n+1)-1;i++)
        {
            temp=str[i];
            str[i]=str[i+2];
            str[i+2]=temp;
         }
     }
