#include<stdio.h>
int main()  
{  
int n;  
scanf("%d", &n);  
if (n<0)    
{   
printf("fu ");  
n=-n;  
}  
int a=n,b=1;  
while(a > 9)   
{   
a=a/10;  
b=b*10;   
}  
const char *str[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
int c;  
while (b>0)   
{  
c=n/b;  
printf("%s",str[c]);  
if (b>9)   
printf(" ");  
n=n%b;  
b=b/10;  
}
printf("\n");  
return 0;  
}  
