#include<stdio.h>
int main()
{
    int i;
    char A[4],B[4];
    char sum[5]={'0'};
    scanf("%s%s",&A,&B);
    for (i=4;i>=1;i--)
    {
        if (A[i-1]+B[i-1]-96>=10)
        {	
            A[i-1]-=10;
            sum[i-1]++;
        }
        sum[i]=A[i-1]+B[i-1]-48;
     }
     if (sum[0]=='0')
         sum[0]='\t';
         printf("%s\n",sum);
     return 0;
}
