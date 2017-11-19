#include <stdio.h>
#include <math.h>
int prime(int n);
int main()

{
    int m, n, a, flag, i = 0;
    printf("请输入M、N：\n");
    scanf("%d%d", &m, &n);
    for(a = 2; a < n; a++)
    {
        flag = prime(a);
        if(a > m && flag == 1)
        {
           printf("%d", a);
           i++;
           if(i%10 == 0)
             printf("\n");
           else
             printf(" ");
        }
    }
    printf("\n");
    return 0; 
}
int prime(int n)
{
 int i;
 for(i = 2; i <= sqrt(n); i++)
     if(n%i == 0)
        break;
 if(i <= sqrt(n))
   return 0;
 else
   return 1;
}    
