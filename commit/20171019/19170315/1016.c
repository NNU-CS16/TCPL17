#include <stdio.h>
#include <string.h>
int main()
{
char A[100+3];
char B[50],C[50];
char b, c;
gets(A);
int i=0,j=0;
while(A[i]!=' ')
   B[j++]=A[j++];
i+=1;
b=A[i];
i+=2;
int k=0;
while(A[i]!=' ')
   C[k++]=A[i++];
i+=1;
c=A[i];
int m=0,n=0;
for(int x=0;x<strlen(B);x++)
    if(b==B[x])
        m++;
for(int y=0;y<strlen(C);y++)
    if(c==C[y])
        n++;
int s1=0,s2=0;
   for(int i=0;i<m;i++)
      s1=s1*10+b-'0';
   for(int j=0;j<n;j++)
      s2=s2*10+c-'0';
printf("%d\n",s1+s2);
return 0;
}
