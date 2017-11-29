#include <stdio.h>
int main(int i, char* commd[])
{
    FILE* sors=fopen(commd[1], "r");
    FILE* tagt=fopen(commd[2], "w");
    char c=fgetc(sors);
    while (c != EOF)
        {
          fputc(c, tagt);
          c=fgetc(sors);
        }
    fclose(sors);
    fclose(tagt);
    return 0;
}
