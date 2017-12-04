#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char *pstr[]={"nanjing","wuxi","xuzhou","changzhou","shuzhou"};
    char *ptemp=NULL;
    for(i=0;i<4;i++)
    for(j=i+1;j<=4;j++)
    {

        if(strcmp(pstr[j],pstr[i])<0)
        {
            ptemp=pstr[j];
            pstr[j]=pstr[i];
            pstr[i]=ptemp;
        }
    }
    for(i=0;i<5;i++)
       printf("%s\n",pstr[i]);
    return 0;
}

