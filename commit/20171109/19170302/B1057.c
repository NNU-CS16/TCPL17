#include<stdio.h>

int main()
{
        char ch;
        int a,b,m,n,a0=0,a1=0;
        
        while((ch=getchar())!='\n')
        {
                if((ch>=65)&&(ch<=97))
                        a+=ch-65;
                if((ch>=97)&&(ch<=122))
                        b+=ch-97;
        }
        n=a+b;
        while(n>0)
        {
                m=n%2;
                if(m!=0)
                        a1++;
                else
                        a0++;
                n=n/2;
        }
        printf("%d  %d\n",a0,a1);
        return 0;
}
