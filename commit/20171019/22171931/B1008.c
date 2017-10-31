#include <stdio.h>  
#include <stdlib.h>  
#define maxSize 101  
int main(){  
	    int A[maxSize];  
	        int M, N;  
		    scanf("%d%d", &N, &M);
		    for (int i = 1; i <= N; i++){  
			            scanf("%d",&A[i]);  
				        }  
		        for (int k = 0; k < M; k++){
				int temp = A[N];
				for (int j = N; j > 1; j--){  
					            A[j] = A[j - 1];  
						            }  
				        A[1] = temp;  
					    }  
			for (int i = 1; i <= N; i++){  
				        printf("%d",A[i]);  
					        if (i != N){  
							        printf(" ");  
								        }  
						    }  
			  
			    printf("\n");  
			        system("pause");  
				    return 0;  
}  
