#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,b=0,k=0,j,t,c=0,s=0;
    char D,A[12],a[12];
    for(i=1;i<=2;i++)
    {
	 scanf("%s",&A);
	 scanf("%c",&D);
	 t=strlen(A);
	 for(j=0;j<t;j++)
	 {
		 if(D==A[j])
		 c++;
	 }
	 if(c!=0)
	 {
	    for(j=1;j<=c;j++)
		    s=s*10+D-'0';
	 }
         c=0;
    }
    printf("%d\n",s);
    return 0;
}    
