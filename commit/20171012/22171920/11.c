  #include <stdio.h>  
    int main()  
    {  
        int m;  
        scanf("%d", &m);  
        int end;  
        int n = 0;  
        end = m + 4;  
        for(int i = m; i<end; i++){  
                for(int j = m; j<end; j++){  
                        if(i == j) continue;  
                        for(int k = m; k<end; k++){  
                             if(k == j) continue;  
                         if(k == i) continue;  
                      n++;  
                             if(n%6){  
                                 printf("%d ", i*100+j*10+k);  
                             }else{  
                                 printf("%d\n", i*100+j*10+k);  
                        }  
                        }  
                }  
        }  
         return 0;
    }  
