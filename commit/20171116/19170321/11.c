   #include <stdio.h>
    void my_strcpy(char* dest, const char* src);
     int main()
    {
        char src[20],dest[20] = {0};
        printf ("input str:");
        scanf ("%s",src);
        my_strcpy( dest,src);
        printf ("%s\n",dest);
        return 0;
    }
    void my_strcpy(char* dest, const char* src)
    {
        int i = 0;
        while (src[i] != '\0')
        {
            dest[i] = src [i];
            i++;
        }
        dest[i] = '\0';
     }

