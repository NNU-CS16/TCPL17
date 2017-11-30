 #include<stdio.h>
 int main(int argc, char *argv[])
 {
    FILE *fp1, *fp2;
    char c;
    fp1 = fopen (argv[1], "r");
    fp2 = fopen (argv[2], "w");
    c = fgetc(fp1);
    if (fp1 && fp2)
    {
        while (c != EOF)
        {
            fputc (c, fp2);
            c = fgetc(fp1);
        }
    }
    fclose (fp1);
    fclose (fp2);
    return 0;
 }

