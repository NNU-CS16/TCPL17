#include <stdio.h>
void f(int a[], int n)
{  
int j = 0;  
	for (int i = 1; i < n; ++i)
    {  
    int tmp = a[i];  
    for (j = i; j > 0 && a[j - 1] > tmp; --j)  
       a[j] = a[j - 1];  
       a[j] = tmp;  
    }   
}   
int main()
{  
	int n;  
    scanf("%d", &n);  
    int a[4] = {};  
     do
     {  
     for (int i = 0; i < 4; ++i) 
     {  
       a[i] = n % 10;  
       n /= 10;  
     }  
    f(a, 4);   
    int min = 0, max = 0; 
    for (int i = 0; i < 4; ++i)  
      min = 10 * min + a[i];  
    for (int i = 3; i >= 0; --i)  
      max = 10 * max + a[i];  
      n = max - min;  
    printf("%04d - %04d = %04d\n", max, min, n);  
    }while (n != 0 && n != 6174);  
          
        return 0;  
    }  
