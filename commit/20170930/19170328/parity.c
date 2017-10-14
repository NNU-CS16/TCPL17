#include<stdio.h>
int main()
{ 
	int n;
       printf("please input an 'n'=");
       scanf("%d",& n);
       int flag =n&1;
       printf("%d\n",flag);
       return 0;
}
