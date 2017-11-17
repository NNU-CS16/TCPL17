#include<stdio.h>  
int is_int_pal(int n) 
{ 
        int b = 0; 
        int c = 0; 
        int d = 0; 
        d = n; 
        while (n > 0)
{ 
            c = n  % 10; 
            n = n / 10; 
            b = b * 10 + c; 
} 
        if (b == d) 
        return 0;
        else 
        return -1;
}  
int main()
{
int n,a;
scanf("%d", &n);
a=is_int_pal(n);
printf("%d\n", a);
return 0;
}
