 #include <stdio.h>
 #include <string.h>
 void k_reverse (char *str, int k);
 int main ()
 {
    char str[100];    
    int k;
    scanf ("%s", str);
    printf ("k=");
    scanf ("%d", &k);
    k_reverse (str, k);
    printf ("%s\n", str);
    return 0;
 }
 void k_reverse (char *str, int k)
 {
    int len = strlen(str);
    int temp, i, j, b = k;
    for (i = 0; (len - b) >= 0; i += k, b += k)
        for (j = 0; j < (k / 2); j++)
        {
            temp = str[i + j];
            str[i + j] = str[b - 1 - j];
            str[b - 1 - j] = temp;
        }
 }
