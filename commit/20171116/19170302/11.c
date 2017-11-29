#include<stdio.h>
void my_strcpy(char *desk,const char* sre);

int main()
{
        char sre[100];
        char desk[100];
        scanf("%s",sre);
        my_strcpy(desk,sre);
        return 0;
}

void my_strcpy(char *desk,const char* sre)
{
        int i=0;
        while(sre[i]!='\0')
        {
                desk[i]=sre[i];
                i++;
        }
        desk[i]='\0';
        printf("%s",*desk);
}
