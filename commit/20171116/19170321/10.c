    #include <stdio.h>
    int my_strlen(const char* str);
   
    int my_strlen(const char* str)
    {
        int i = 0, num = 0;
        while(1)
        {
            i++;
            num++;
            if (str[i] == '\0')
                break;
        }
        return num;
    }   
