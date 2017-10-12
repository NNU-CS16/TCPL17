#include<stdio.h>
unsigned rightrot(unsigned x,int n)
{
    int wordlength(void);
    unsigned rbits;
    if((n=n%wordlength())>0);
    {
        rbits= ~(~0<<x) & x;
        rbits= rbits<<(wordlength()-n);
        x=(x>>n)|rbits;
    }
    return x;

}
    int wordlength(void)
{
    int i;
    unsigned v=(unsigned)-0;
    for(i=1;(v = v>>1)>0;i++)
    printf("%d\n",i);

      return i;
}
     int main()
{
     unsigned int x=144;
     unsigned int y;
     int n=3;
     y=rightrot(x,n);
     printf("%d\n",y);
     return 0;
} 

