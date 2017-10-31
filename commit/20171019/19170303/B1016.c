#include <stdio.h>  
#include <string.h>  
  
#define Maxn 12  
char A[Maxn];  
char B[Maxn];  
  
double creatnum(char a[],char da);  
  
int main(void)  
{  
   char Da,Db;  
   double Pa,Pb;  
  scanf("%s %c %s %c",A,&Da,B,&Db);  
    Pa = creatnum(A,Da);  
    Pb = creatnum(B,Db);  
   printf("%.0f\n",Pa+Pb);         
     return 0;  
}  
  
double creatnum(char a[],char da)  
{  
    int length = strlen(a);  
    double result=0;  
  for(int i = 0;i<length;++i)  
{  
 if(a[i] == da)  
 {  
 result = 10*result+(da-'0');  
 }  
 }  
 return result;  
} 
