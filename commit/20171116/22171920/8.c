#include<stdio.h>  
void main(void)
{  
	int a[20][20];  
	int i = 0,j = 0,k = 0, N, p, s = 1;  
	while (N<1 || N>20)
		{  
            printf("N=");  
            scanf("%d",&N);     //矩阵的行数   
        }  
        p = N/2;  
        while (k<p)
		{      //K是层数，依次递进               
            i = k;  
            j = k;  
            while (j < N-1-k)  
                a[i][j++] = s++;  
            while (i < N-1-k)  
                a[i++][j] = s++;  
            while (j>k)  
                a[i][j--] = s++;  
            while (i>k)  
                a[i--][j] = s++;  
            k++;  
        }  
        if (N%2==1)      //n是奇数的时候补齐最后一个   
            a[p][p] = s++;  
        for (i = 0; i<N; i++)
		{  
            for (j=0;j<N;j++)
		{  
                printf("%d\t",a[i][j]);  
        }  
            printf("\n");  
        }  
}  
