#include<stdio.h>
void my_strcpy(char*,char*);
int main()
{
    char A[1000],B[500];
    scanf("%s%s",A,B);
    my_strcpy(A,B);
    printf("%s\n",A);
    return 0;
}

void my_strcpy(char* A,char* B)
{
    int i=0,j=0;
    while(A[i]!='\0')i++;
    while(B[j]!='\0')
    {
        A[i]=B[j];
        j++;i++;
    }

}
