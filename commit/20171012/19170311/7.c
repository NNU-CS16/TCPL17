#include<stdio.h>
int main(void)
{
	int no;

	do{
	   scanf("%d",&no);
	   if (no<100 || no>999)
	  printf("Please enter a three positive intergers");
	}
	while (no<100 || no>999);

	int i;
	for(i=3;i>0;i--){
	if (no%10 == 0){
	printf(" ");
	no /= 10;
	continue;}
	printf("%d",no%10);
	no /= 10;
	}
	
	return 0;
}
