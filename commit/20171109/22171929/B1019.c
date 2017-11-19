#include<stdio.h>  
  
int main(int agrc,char *argv[])  
{  
    int n,temp;  
    int a,b;  
    int i,j;  
    int arr[4];  
    scanf("%d",&n);  
    do  
    {  
        a = 0;  
        b = 0;  
        for (i = 0; i < 4; i++)  
        {  
            arr[i] = n%10;  
            n = n/10;  
        }  
        for (i = 1; i < 4; i++)  
            for (j = 0; j < 4-i; j++)  
            {  
                if (arr[j] > arr[j+1])  
                {  
                    temp = arr[j];  
                    arr[j] = arr[j+1];  
                    arr[j+1] = temp;  
                }  
            }  
        for (i = 0; i < 4; i++)  
            b = b*10+arr[i];  
        for (j = 3; j >= 0; j--)  
            a = a*10+arr[j];  
        n = a -b;  
        printf("%.4d - %.4d= %.4d\n",a,b,n);  
    }
    while (n!=6174&&n!=0);  
  
    return 0;  
}  

