#include<stdio.h>  
#include<string.h>  
#define MAX 100  
int main(void) 
{  
  unsigned int a, b, d, sum, i;  
  int size;  
  char n[MAX], tmp;  
  scanf("%u %u %u", &a, &b, &d);  
  sum = a + b;  
  if(10==d||sum==0)
  {  
    printf("%u", sum);  
  } 
  else 
  {  
    for (i = 0; sum != 0; i++)
    {  
      n[i] = '0' + sum%d;  
      sum /= d;  
    }  
    n[i] = '\0';  
    size = strlen(n);  
    for (i = 0; i < size / 2; i++)
    {  
      tmp = n[i];  
      n[i] = n[size - i - 1];  
      n[size - i - 1] = tmp;  
    }  
    printf("%s", n);  
  }  
  return 0;  
}


  
