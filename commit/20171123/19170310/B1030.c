#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,flag=0;
    char a[81]={0},b[81]={0},c[81]={0};
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if((strchr(b,a[i])==0)&&(strchr(c,a[i])==0))
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]-32;
            }
            if(strchr(c,a[i])==0) 
            {
                c[j]=a[i];
                j++;
            }
        }
    }
    for(i=0;i<strlen(c);i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}
