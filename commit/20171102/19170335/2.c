#include<stdio.h>
void print_hex(int n)
{
	if(n>0)
	  {
	   print_hex(n/16);
	   switch(n%16)
		 {
	          case 10:printf("A");break;
		  case 11:printf("B");break;
		  case 12:printf("C");break;
		  case 13:printf("D");break;
		  case 14:printf("E");break;
                  case 15:printf("F");break;
		  default:printf("%c",n%16+48);break;
		 }
	  }
}
int main()
{
	int n;
	scanf("%d",&n);
	print_hex(n);
	return 0;
}


