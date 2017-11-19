 #include <stdio.h>  
    void Sort(int a[], int n) 
    {    
        int j = 0;  
        for (int i = 1; i < n; ++i) 
        {  
            int tmp = a[i];  
            for (j = i; j > 0 && a[j - 1] > tmp; --j)  
                a[j] = a[j - 1];  
            a[j] = tmp;  
        }   
    }   
    int main() {  
        int num;  
        scanf("%d", &num);  
        int a[4] = {};  
        do{  
            for (int i = 0; i < 4; ++i) {  
                a[i] = num % 10;  
                num /= 10;  
            }  
            Sort(a, 4);   
            int min = 0, max = 0;  
            for (int i = 0; i < 4; ++i)  
                min = 10 * min + a[i];  
            for (int i = 3; i >= 0; --i)  
                max = 10 * max + a[i];  
            num = max - min;  
            printf("%04d - %04d = %04d\n", max, min, num);  
        }while (num != 0 && num != 6174);  
          
        return 0;  
    }  
