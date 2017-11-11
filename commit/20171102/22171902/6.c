#include<stdio.h>
#include<math.h> 
int is_prime(int n);
int main()
{
      int n=2;
      is_prime(n);
      return 0;

}

int is_prime(int n)
{
    int i,count=0,j;
    for ( ; ;n++)
      {
        for(i=2;i<=sqrt(n);i++)
        {
           if(n%i==0)
           break;
           }
            if(i>=sqrt(n))
           { count++;
           if(count>=100&&count<=1000)
                printf("%d",n);
                printf("\n");}
           
        
     else   if(count>1000)
           break;
           }
      return 0;
}

