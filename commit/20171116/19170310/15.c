#include<stdio.h>
#define F_PATH "d:\\myfile\\file.dat"
    char c;
int main()
{
      FILE*file=NULL;
      file=fopen(F_PATH,"r");
      if(NULL==file)
             return -1;
      while(fscanf(file,"%c",&c)!=EOF)
             printf("%c",c); 
      fclose(file);
      file=NULL; 
      return 0;
}
