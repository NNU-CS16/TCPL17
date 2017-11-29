#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 40
int main(int argc, char *argv[])
{
 FILE *in;
 int i;
 char ch[M];
 if (argc<2)
  {
    fprintf(stderr,"Usage:%s filename\n",argv[0]);
    exit(1);
  }
 if ((in = fopen(argv[1],"r"))==NULL)
  {
   fprintf(stderr,"Couldn't open the file\"%s\"\n",argv[1]);
    exit(2);
  }
 fgets(ch,40,in);
 printf("%s\n",ch);
 if(fclose(in)!=0)
   fprintf(stderr,"Error in closing files.\n");
 return 0;
}
