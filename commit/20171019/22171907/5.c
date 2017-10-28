#include <stdio.h>
#include <string.h>

int search46(char *p)//在一个字符串中查找'.'，如果找到返回长度，如果没找到返回null
{
    int TmpLength;
    char searchString='.'; //需要查找的字符
    if(!strchr(p,searchString))
    {
        return 0;
    }
    else
    {
        char *px = strchr(p,searchString);
        int re = px-p; //指针相减，得到含有'.'字符串的字符长度
        return re;
    }
}

int main(void)
{
    //获得字符串
    char str[1000];
    gets(str);
    int flag=0; //判断是否是第一个输出
    char *pTmpStr=str;
    int TmpLength;//字符串的总长度
    TmpLength = search46(pTmpStr);
    int length=0;//每个字符段的长度
    int i;
    char tmp;
    for(i=0;i<TmpLength;i++)
    {   tmp=str[i];
        if(tmp==' ')
        {
            if(length==0)
                continue;
            if(flag)
                printf(" ");
            flag++;
            printf("%d",length);
            length=0;
            continue;
        }
        length++;
    }
    if(length!=0)
    {
        if(flag)
            printf(" ");
        printf("%d",length);
    }


    return 0;
}
