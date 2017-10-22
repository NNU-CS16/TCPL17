#include<stdio.h>
int main()
{
	char c;			
	int i;
	float x;
	double z;
	long int li;
	signed long int ls;
	unsigned int ui;
	unsigned long int lu;
	short int si;
	signed short int ssi;
	unsigned short int sui;


	printf("char size=%lu\n",sizeof(c));
	printf("int size=%lu\n",sizeof(i));
	printf("float size=%lu\n",sizeof(x));
	printf("double size=%lu\n",sizeof(z));
	printf("long int size=%lu\n",sizeof(li));
	printf("signed long int size=%lu\n",sizeof(ls));
	printf("unsigned int size=%lu\n",sizeof(ui));
	printf("unsigned long int  size=%lu\n",sizeof(lu));
	printf("short int size=%lu\n",sizeof(si));
	printf("signed short int size=%lu\n",sizeof(ssi));
	printf("unsigned short int size=%lu\n",sizeof(sui));

	return 0;
}
