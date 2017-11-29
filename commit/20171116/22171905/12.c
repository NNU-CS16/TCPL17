#include <stdio.h>
 
int main()
{
	int strcmp(char * p1,char * p2);
	char * s1 = "hello world";
	char s2[] = "hello_world";
	char s3[] = "hello world";
	if(strcmp(s1,s2)==0){
		printf("String s1 and s2 are equal!\n");
	}
	else{
		printf("String s1 and s2 are not equal!\n");
	}
	if(strcmp(s1,s3)==0){
		printf("String s1 and s3 are equal!\n");
	}
	else{
		printf("String s1 and s3 are not equal!\n");
	}
	getchar();
	return 0;
}
 
//自己编写的一个比较字符串的函数
int strcmp(char * p1,char * p2)
{
	for(;;)
	{
		if(*p1=='\0' && *p2=='\0'){
			return 0;
		}
		if(*p1!=*p2){
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
}
