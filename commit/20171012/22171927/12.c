#include<stdio.h>
int main()
{
        int a,b;
        scanf("%d/%d",&a,&b);
        int i;
        int m,n;
        if(a==b){
                printf("1/1");
        }else{
                for(i=1;i<(a+b);i++){
                        if(a%i==0&&b%i==0){
                                m = a/i;
                                n = b/i;
                        }
                }
        printf("%d/%d",m,n);
        }
        return 0;
}
