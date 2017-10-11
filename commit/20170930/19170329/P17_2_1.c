#include<stdio.h>
int main()
{
int i;
long int li;
signed long int ls;
unsigned u;
unsigned long int uli;
short int si;
signed short int ssi;
unsigned short int usi;
char c;
float x;
double z;




printf("int size=%lu\n",sizeof(i) );
printf("long int size=%lu\n",sizeof(li));
printf("signed long int size=%lu\n",sizeof(ls));
printf("unsigned size=%lu\n",sizeof(u)); 
printf("unsigned long int size=%lu\n",sizeof(uli));
printf("short int size=%lu\n",sizeof(si));
printf("signed short int size=%lu\n",sizeof(ssi));
printf("unsigned short int size=%lu\n" ,sizeof(usi));
printf("char size=%lu\n",sizeof(c));
printf("float size=%lu\n",sizeof(x));
printf("double size=%lu\n",sizeof(z));
return 0;
} 
