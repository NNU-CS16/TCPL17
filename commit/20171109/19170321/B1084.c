#include <stdio.h>
    int main()
    {
        char str[1000];
        int num[26] ={0};
        int i,j = 0, max = 0, zifu;
         while(1)
        {
            scanf("%c",&str[j]);
            if (str[j] == '\n')
                break;
            if('a' <= str[j] && 'z' >=str[j])
                {
                    i = str[j] -'a';
                    num[i]+=1;
                }
            if('A' <= str[j] && 'Z' >=str[j])
                {
                    i = str[j] -'A';
                    num[i]+=1;
                }
            j++;
        }
        for (i = 0; i < 26; i++)
            if (num[i] > max)
            {
                max = num[i];
                zifu = i +'a';
            }
        printf ("%c %d\n",zifu, max);
        return 0;
    }
