#include<stdio.h>
int step(int N);

int main()
{
    int N;
    printf("输入正整数N（1<=N<=1000):");
    scanf("%d",&N);
    printf("%d",step(N));
    return 0;


}

int step(int N)
{
    if(N==1)
       return 1;
    if(N==2)
        return 2;
    return (step(N-1)+step(N-2));

}

