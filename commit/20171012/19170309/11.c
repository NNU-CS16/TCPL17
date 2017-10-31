#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    
    int i, j, k;
    int count = 0;
    for (i=n; i<=n+3; i++) {
        for (j=n; j<=n+3; j++) {
            if ( j == i ) continue;
            for (k=n; k<=n+3; k++) {
                if ( k==i || k==j) continue;
                printf("%d%d%d", i, j, k);
                count ++;
                if (count % 6 == 0) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }
    }
     
    return 0;
}
