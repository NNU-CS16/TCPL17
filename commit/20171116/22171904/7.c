#include <stdio.h>
#include <string.h>

int main()
{
	char m[1000],n[1000];
	int i,len_m,len_n,len_max,k;
	int A[1000]={0},B[1000]={0},C[1000]={0};
	scanf("%s",m);
	len_m=strlen(m);
	for(i=0;i<=len_m-1;i++)
		A[i]=m[len_m-1-i]-'0';
	scanf("%s",n);
	len_n=strlen(n);
	for(i=0;i<=len_n-1;i++)
		B[i]=n[len_n-1-i]-'0';
	if(len_m>len_n)
		len_max=len_m;
	else
		len_max=len_n;
	k=0;
	for(i=0;i<=len_max-1;i++)
	{
		C[i]=(A[i]+B[i]+k)%10;
		k=(A[i]+B[i]+k)/10;
	}
	if(k!=0) C[len_max]=1;
	if(C[len_max]==1)  printf("1");
	for(i=len_max-1;i>=0;i--)
		printf("%d",C[i]);
	return 0;
}
