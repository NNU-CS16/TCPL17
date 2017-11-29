#include<stdio.h>
#define F_PATH "d:\\myfile\\file.dat"
char c;
int main()
{
    FILE*fp=NULL;
    fp=fopen(F_PATH,"r");
    if(NULL==fp) return -1;
    while(fscanf(fp,"%c",&c)!=EOF) printf("%c",c); 
    fclose(fp);
    fp=NULL;
    return 0;
}
