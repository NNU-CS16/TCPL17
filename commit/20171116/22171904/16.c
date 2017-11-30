#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define MaxBytes 1024

int main(int argc ,char * argv[] )
{
	int in,out;
	int need;
	char buffer[MaxBytes+1];
	if(argc<3)
	{
		printf("Please input source file path and destination file path\n");
		exit(1);
	}
	in=open(argv[1],O_RDONLY);
	out=open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	while((need=read(in,buffer,MaxBytes))>0)
	{
		write(out,buffer,need);
	}
	exit(0);
}

