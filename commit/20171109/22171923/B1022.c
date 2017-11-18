#include <stdio.h>
int main()
{
    int A,B,C,D,i,num[30];
    scanf("%d %d %d",&A,&B,&D);
    C=A+B;
    for (i=0;C>0;i++)
    {
	num[i]=C%D;
	C/=D;
    }
	i--;
	for (;i>=0;i--)
	  printf("%d",num[i]);
    printf("\n");
    return 0;
}
 
