#include<stdio.h>
int main()
{
  char a;
  int b;
  float c;
  double d;
  long int e;
  unsigned int f;
  signed long int g;
  unsigned int h;
  short int i;
  signed short int j;
  unsigned short int k;

  printf("char size=%d\n",sizeof(a));
  printf("int size=%d\n",sizeof(b));
  printf("float size=%d\n",sizeof(c));
  printf("double size=%d\n",sizeof(d));
  printf("long int size=%d\n",sizeof(e));
  printf("unsigned int size=%d\n",sizeof(f));
  printf("signed long int size=%d\n",sizeof(g));
  printf("unsigned int size=%d\n",sizeof(h));
  printf("short int size=%d\n",sizeof(i));
  printf("signed short int=%d\n",sizeof(j));
  printf("unsigned short int=%d\n",sizeof(k));
 
  return 0;
}
