#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
void print(int M, int N);
bool isprime(int n);
 
int main()
{
     int M, N;
    
    scanf("%d%d", &M, &N);
    print(M, N);  
    return 0;
 }
 
void print(int M, int N)
 {
     int i, z;
     for(i = 2, z = 0; z < N; i++)
     {
         if(isprime(i))
         {
             z++;
             if(z >= M)
             {
                 printf("%d", i);
                 if((z - M + 1) % 10 != 0 && z < N)
                         printf(" ");
                 else
                     printf("\n");
             }
         }
     }
 }
 
 bool isprime(int n)
 {
     int i, tmp;
     tmp = sqrt(n);
     for(i = 2; i <= tmp; i++)
     {
         if(n % i == 0)
             return false;
     }
     
     return true;
 }
