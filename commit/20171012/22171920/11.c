  #include <stdio.h>  
    int main()  
    {  
        int start;  
        scanf("%d", &start);  
        int end;  
        int n = 0;  
        end = start + 4;  
        for(int i = start; i<end; i++){  
                for(int j = start; j<end; j++){  
                        if(i == j) continue;  
                        for(int k = start; k<end; k++){  
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
