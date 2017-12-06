    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int i, j, k = 0;
        int r = 0, p;
        char a[10000], b[10000];
        int c[20000];
        printf ("input A;");
        scanf ("%s",a);
        printf ("input B:");
        scanf ("%s",b);
        for (i = strlen(a) - 1, j = strlen(b) - 1; i >= 0 && j >= 0; i--, j--)
        {
             p = (a[i] - '0') + (b[j] - '0') + r;
             r = p / 10;
             c[k++] = p % 10;
        }
        while(i >= 0)
        {
             p = (a[i] - '0') + r;
             r = p / 10;
             c[k++] = p % 10;
             i--;
         }
         while(j >= 0)
         {
             p = (b[j] -'0') + r;
             r = p / 10;
             c[k++] = p % 10;
             j--;
         }
         if (r)
             c[k++] = r;
         for (i = k - 1; i >= 0; i--)
             printf ("%d",c[i]);
         printf ("\n");
         return 0;
     }

