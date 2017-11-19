#include<stdio.h>
#include<math.h>
int isprime(int n)
   {
      for(int i=2;i<=sqrt(n); ++i)
           if (n%i==0)
              return 0;
      return 1;

   }
int main()
{
   int m,n;
   scanf("%d%d",&m,&n);
   int count=0;
   int m_count=0;
   for (int i=2;count<=n;++i)
      {
        if (isprime(i))
            {
              ++count;
              if(count>=m && count <=n)
                {
                   ++m_count;
                   printf("%d",i);
                   if (m_count%10==0)
                        printf("\n");
                   else if(count!=n)
                        printf(" ");

                }
            }



      }
    return 0;
}
