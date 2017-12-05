 #include <stdio.h>  
 #include <stdlib.h>  
  
 int cmp (const void *a, const void *b)  
{  
    return *(int *)a - *(int *)b;  
}  
  
 int main()  
{  
    int i, N;  
    scanf("%d", &N);  
  
    int *numl = (int *) malloc (sizeof(int) * N);  
    int *zhuyuan = (int *) malloc (sizeof(int) * N);  
    int *res = (int *) malloc (sizeof(int) * N);  
  
    for(i = 0; i < N; i++)  
    {  
        scanf("%d", &numl[i]);  
        zhuyuan[i] = 1;  
    }  
      
    int leftMax = numl[0];  
    int rightMin = numl[N-1];  
  
    for(i = 1; i < N; i++)  
    {     
        if(numl[i] > leftMax)   
        {  
            leftMax = numl[i];  
        }  
        else  
        {  
            zhuyuan[i] = 0;  
        }  
    }  
  
    for(i = N-2; i >= 0; i--)  
    {     
        if(numl[i] < rightMin)   
        {  
            rightMin = numl[i];  
        }  
        else  
        {  
            zhuyuan[i] = 0;  
        }  
    }  
  
    int count = 0;  
    for (i = 0; i < N; i++)  
    {  
        if(zhuyuan[i] == 1)  
        {  
            res[count++] = numl[i];  
        }  
    }  
  
    qsort(res, count, sizeof(int), cmp);  
  
    printf("%d\n", count);  
    for(i = 0; i < count; i++)  
    {  
        if(i > 0)  
        {  
            printf(" ");  
        }  
        printf("%d", res[i]);  
    }  
    printf("\n");  
  
    return 0;  
}  

