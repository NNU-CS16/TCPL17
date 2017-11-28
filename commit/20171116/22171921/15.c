#include<stdio.h>

int main(int argc, char *argv[]) 
{
    int byte;
    FILE *infp;
    char filename[60];
    argc = 2;
    filename = argv[1];
    printf("文件名:");
    scanf("%s",filename);
    infp = fopen(filename,"rb");
    if(infp ==c NULL) 
    {
        printf("无法打开文件!\n");
        return 1; 
    }
    while((byte = fgetc(infp)) != EOF)
        fputc(byte, stdout);
        fputc('\n', stdout);
        fclose(infp);
        return 0;
}
