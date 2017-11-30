#include<stdio.h> 
#include<stdlib.h>
#include<math.h> 

int compare(const void *p, const void *q);

int main() 
{    
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0;i < N;i++) 
    {
        scanf("%d", &a[i]);
    }
    qsort(a, N, sizeof(int), compare);
    int row = ceil(sqrt(N));
    int col = sqrt(N);
    while (row * col != N) 
    {
        if (row * col < N) 
        {
            row ++;
        } 
        else if (row * col > N)
        {
            col --;
        }
    }      
    int b[row][col];
    for (int i = 0;i < row;i++) 
    {
        for (int j = 0;j < col;j++) 
        {
            b[i][j] = 0;
        }
    }     
    int i = 0, j = 0;
    int count = 0;
    while (count != N) 
    {
        for (;j < col;j++) 
        {
            if (!b[i][j]) 
            {
                b[i][j] = a[count++];
            } 
            else 
            {
                break;
            }
        }  
        j--;  
        i++;  
        for (;i < row;i++) 
        {
            if (!b[i][j]) 
            {
                b[i][j] = a[count++];
            } 
            else 
            {
                break;
            }
        }  
        i--; 
        j--;  
        for (;j >= 0;j--) 
        {
            if (!b[i][j]) 
            {
                b[i][j] = a[count++];
            } 
            else 
            {
                break;
            }
        }  
        i--; 
        j++; 
        for (;i >= 0;i--) 
        {
            if (!b[i][j]) 
            {
                b[i][j] = a[count++];
            } 
            else 
            {
                break;
            }
        }  
        i++;  
        j++;                           
    }    
    for (int i = 0;i < row;i++) 
    {
        for (int j = 0;j < col;j++) 
        {
            printf ("%d", b[i][j]);
            if (j < col-1) 
            {
                printf (" ");
            }
        }
        printf ("\n");
    }   
    return 0;
} 

int compare(const void *p, const void *q) {
    int x = *(int *)p;
    int y = *(int *)q;
    if (x > y) {
        return -1;
    } else if (x < y) {
        return 1;
    }
    return 0;
}
             
