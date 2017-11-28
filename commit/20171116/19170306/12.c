#include<stdio.h>
int my_strcmp(char*,char*);
int main()
{
char A[1000],B[1000];
scanf("%s%s",A,B);
printf("%d\n",my_strcmp(A,B));
return 0;
}

int my_strcmp(char* A,char* B)
{
int i=0;
while(A[i]==B[i]&&A[i]!='\0'&&B[i]!='\0')i++;
if (A[i]=='\0')
        if (B[i]=='\0')return 0;
         return -1;
if (B[i]=='\0')return 1;
if (A[i]>B[i])return 1;
return -1;
}


