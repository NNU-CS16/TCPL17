#include<stdio.h>
int main()
{
    int i,s;
    s=0;
    for(i=1;i<=99;i++)
       {
        if (i%3==1) s=s+i;
        else s=s*i;
       }
    printf("1*2*3+4*5*6+...+97*98*99=%d\n",s);
    return 0;
}
 

