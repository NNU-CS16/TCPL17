#include <stdio.h>
#include <string.h>
int main()
{
   char A[1000],B[1000];
   int i,len1,len2,len,a[1000]={0},b[1000]={0},z[1001]={0};
   scanf("%s%s",A,B);
   len1=strlen(A); len2=strlen(B);
   for(i=0;i<len1;i++)
     a[i]=A[len1-i-1]-48;
   for(i=0;i<len2;i++)
     b[i]=B[len2-i-1]-48;
   if(len1>len2)
    len=len1;
   else
    len=len2;
   for(i=0;i<len;i++)
   {
    z[i]+=a[i]+b[i]; z[i+1]=z[i]/10;
    z[i]=z[i]%10;
   }
   if(z[i]>0)
    len++;
   for (i=len-1;i>=0;i--)
    printf("%d",z[i]);
   printf("\n");
   return 0;
}
