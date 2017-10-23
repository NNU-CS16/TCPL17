#include <stdio.h>

int main()
{
   int a, b, c, m, A, x=0;
   scanf("%d\n",&A);

   if(A>0 && A<=6)
    {
     for(a=A;a<=A+3;a++)
     for(b=A;b<=A+3;b++)
      if(a!=b)
        for(c=A;c<=A+3;c++)
         if(c!=a && c!=b)
         {
          m=100*a+10*b+c;
          x++;
          printf("%d\t",m);
          if(x%6==0)
           printf("\n");
         }
    }
printf("\n");
return 0;
}

