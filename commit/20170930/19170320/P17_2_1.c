 #include<stdio.h>
int main()
{
      char a;
      int b;
      long int c;
      signed long int d;
      unsigned int e;
      unsigned long int f;
      short int g;
      signed short int h;
      unsigned short int i;
      float j;
      double k;

      printf("char                  size=%ld\n",sizeof(a));
      printf("int                   size=%ld\n",sizeof(b));
      printf("long int              size=%ld\n",sizeof(c));
      printf("signed long int       size=%ld\n",sizeof(d));
      printf("unsigned int          size=%ld\n",sizeof(e));
      printf("unsigned long int     size=%ld\n",sizeof(f));
      printf("short int             size=%ld\n",sizeof(g));
      printf("signed short int      size=%ld\n",sizeof(h));
      printf("unsigned short int    size=%ld\n",sizeof(i));
      printf("float                 size=%ld\n",sizeof(j));
      printf("double                size=%ld\n",sizeof(k));


      return 0;
}
