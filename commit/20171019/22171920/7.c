#include<stdio.h>
#include<math.h>
int main(){
    int N,n,m=0;
    int i,j,k;
    char c;
    printf("输入1个正整数N（≤1000）和一个符号，中间以空格分隔:");
    scanf("%d %c",&N,&c);
    n=sqrt((N+1)/2);
    for(i=n;i>=1;i--){
        if(i<=n){
            for(k=1;k<=n-i;k++){
                printf(" ");
            }
        for(j=1;j<=2*i-1;j++){
            printf("%c",c);
            m++;
            }
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        if(i>=2){
            for(k=1;k<=n-i;k++){
                printf(" ");
            }
        for(j=1;j<=2*i-1;j++){
            printf("%c",c);
            m++;
            }
        printf("\n");
        }
    }
    printf("%d\n",N-m);
     
     return 0;
}
