 #include<stdio.h>
void print_hex(int a);
int main()
{
	int a = 0;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}

void  print_hex(int a)
{
	char s[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	char hex[20];
	int i=0;
	printf("%x\n",a);
	while(a){
		hex[i++]=s[a%16];
		a/=16;
	}
	for(--i;i>=0;--i)
		printf("%c",hex[i]);
	printf("\n");
}

