#include <stdio.h>  
int main()  
{  
int n;  
scanf("%d", &n);  
if (n < 0)   
{   
printf("fu ");  
n = -n;  
}  
int t = n,m = 1;  
while(t > 9)   
{   
t /= 10;  
m *= 10;   
}  
char *s[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };  
int d;  
while (m > 0)   
{  
d = n / m;  
printf("%s", s[d]);  
if (m > 9)   
printf(" ");  
n %= m;  
m /= 10;  
}  
return 0;  
}  
