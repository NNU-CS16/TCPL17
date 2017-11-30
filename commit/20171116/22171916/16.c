#include<stdio.h>
#include<stdlib.h>
#define M 40
int main(int argc,char *argv[])
{
  FILE *in,*out;
  char ch[40];
  if (argc<2)
  {
    fprintf(stderr,"Usage:%s filename\n",argv[0]);
    exit(1);
  }
  if((in=fopen(argv[1],"r"))==NULL)
   {
     fprintf(stderr,"Count't open the file\"%s\".",argv[1]);
     exit(2);
  
   }
  if((out=fopen(argv[2],"w"))==NULL)
  {
    fprintf(stderr,"Countn't create output flie.");
    exit(3);
  }
 fgets(ch,40,in);
 fputs(ch,out);
 if(fclose(in)!=0||fclose(out)!=0)
    fprintf(stderr,"Error in closing filrs\n");
 return 0;

}
