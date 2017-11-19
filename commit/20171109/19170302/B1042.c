#include<stdio.h>

int main()
{
        int i,max=0,k;
        int num[26]={0};
        char ch;
        while((ch=getchar())!='\n')
        {if((ch>=65)&&(ch<=90));
                num[ch-65]++;
                if
                        ((ch>=97)&&(ch<=122))
                                num[ch-97]++;
        }
        for(i=0;i<26;i++)
                if(max<num[i])
                {
                        max=num[i];
                        k=i;
                }
        printf("%c %d\n",'a'+k,max);
        return 0;
}

