#include<stdio.h>
int main()
{
    int A ,B ,C ,D ,i；
    int num[30];
    scanf("%d%d%d",&A,&B,&D);
    C =A + B;
    for (i = 0; C > 0; i++)
    {
      num[i] = C % D;
      C = C / D;
    }
    i--;
    
    for ( ;i >= 0; i--)
	printf("%d",num[i]);
    printf("\n");
    return 0;
}

