    #include "stdio.h"
    void main()
    {
        FILE *fp;
	if((fp = fopen("f1.txt", "r")) == NULL)
	{
	    printf("无法打开\n");
	    return 0;
        }
	while(!feof(fp))
	{
	    putchar(fgetc(fp));
	}
    }
