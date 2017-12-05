#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE*p,*q;
    p=fopen(argv[1],"r");
    q=fopen(argv[2],"w");
    char a;
    while(a!=EOF)
    {
       a=fgetc(p);
       fputc(a,q);
    }
    fclose(p);
    fclose(q);
    return 0;
}

