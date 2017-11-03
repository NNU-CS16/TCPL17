#include<stdio.h>
#include<math.h>
int is_pow2(int n)
{
while(!(n % 2))  
{  
n=n/2;  
if(n == 1)  
{    
return 0;
}  
}  
return -1; 
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_pow2(n));
return 0;
}



