#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *fname[]={0};
    FILE *fp;
    char ch;
    if ((fp = fopen(fname[1],"r")) == NULL)
    {
        printf("fail\n");
        exit(1);
        }
    ch = fgetc(fp);
    while (!feof(fp))
        printf("fail\n");
    return 0;
}
