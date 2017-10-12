/*This is the first question*/
#include<stdio.h>
int main()
{
  char c;
  int i;
  float x;
  double z;
  long int a;
  unsigned int b;
  short int d;
  unsigned short int e;

  printf("char size=%d\n",sizeof(c));
  printf("int size=%d\n",sizeof(i));
  printf("float size=%d\n",sizeof(x));
  printf("double size=%d\n",sizeof(z));
  printf("long int size=%d\n",sizeof(a));
  printf("unsigned int size=%d\n",sizeof(b));
  printf("short int size=%d\n",sizeof(d));
  printf("unsigned short int size=%d\n",sizeof(e));

  return 0;
}
