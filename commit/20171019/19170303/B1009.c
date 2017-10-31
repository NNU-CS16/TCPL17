#include<stdio.h>
#include<string.h>

int main()
{
    char a[81] = {'0'};
    char b[81][81] = {'0'};
    int i;
    int j = 0;
    int count= 0;
    gets(a);
    for(i = 0; i < strlen(a); i++);
    {
        if (a[i] == ' ')
 { 
     j = 0;
     count++;
     continue;
 }
        b[count][j++] = a[i];                                                        
}
    for(i = count;i > 0;i--)
    {
        printf("%s ",b[i]);
    }
    printf("%s",b[0]);
    return 0;
}
