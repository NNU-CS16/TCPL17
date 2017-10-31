#include<stdio.h>
int main()
{
char c;int bump=0;
while(1) {
	 scanf("%c",&c);
	 if (c=='.') break;
	 if (c==' ') {if(bump!=0) printf(" %d",bump);bump=0;}
	 else bump++;
	 }
return 0;
}
