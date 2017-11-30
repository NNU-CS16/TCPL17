    #include <stdio.h>
    int my_strcmp(const char* str1, const char* str2);
    int main()
    {
        char str1[20],str2[20] = {0};
        printf ("input str1:");
        scanf ("%s",str1);
        printf ("input str2:");
        scanf ("%s",str2);
        printf ("%d\n", my_strcmp(str1, str2));
        return 0;
    }
    int my_strcmp(const char* str1, const char* str2)
    {
        int i = 0, flag = 0;
        while (str1[i] != '\0' && str2[i] != '\0')
        {
           if (str1[i] < str2[i])
           {
               flag = -1;
               break;
           }
           if (str1[i] > str2[i])
           {
               flag = 1;
               break;
           }
           if (str1[i] == str2[i])
               i ++;
        }
        if (str1[i] != '\0'&& str2[i] == '\0')
         {
               flag = 1;
           }
        if (str2[i] != '\0'&& str1[i] == '\0')
           {
               flag = -1;
           }


        return flag;
    }
