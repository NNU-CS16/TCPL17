#include<stdio.h>
unsigned rightrot(unsigned int x,int n)
{
	 int wordlength(void);
	 unsigned rbits;
	 if((n = n % wordlength()) >0)
{

     rbits = ~(~0<<x) & x;

     rbits = rbits << (wordlength()-n);

     x = (x >> n)| rbits;

}

     return x;

}



unsigned rightrot_c(unsigned int x,int n)

{

    int wordlength(void);

    int rbit;

    while(n-- > 0)

    {

     rbit = (x & 1) << (wordlength() - 1);

     x = (x >> 1) | rbit;

    }

    return x;

}



int wordlength(void)

{

    int i;

    unsigned v = (unsigned) ~0;

    for(i=1;(v = v >> 1) >0;i++);

 // printf("%d\n",i);

    return i;

}



int main()

{

    unsigned int x=129;

    unsigned int y,z;

    int n=2;

    y=rightrot(x,n);

    z=rightrot_c(x,n);

    printf("%d\n%d",y,z);

    return 0;

}
