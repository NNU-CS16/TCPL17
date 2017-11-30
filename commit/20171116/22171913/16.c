#include <stdio.h>
int copy(void)
{
    char c;
    FILE *fp1, *fp2;
    if ((fp1 = fopen("a.txt", "rb")) == NULL)
	return -1;
    if ((fp2 = fopen("b.txt", "wb")) == NULL)
	return -1;
    while (!feof(fp1))
    {
	c = fgetc(fp1);
	fputc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
void main()
{
    if (copy())
    {
	printf("error\n");
	return;
    }
    else
	printf("复制成功\n");
}

