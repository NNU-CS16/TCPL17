#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int M;
    int N;
    scanf("%d",&M);
    scanf("%d",&N);
    int *p = (int *)malloc(10000 * sizeof(int));
    int index_for_p=0;
    int var;
    for (var = 2;index_for_p<10000; ++var) {
        short is_prime;
        is_prime=1;
        int j;
        for (j = 2; j <=sqrt((double)var); ++j) {
            if (var%j==0) {
                is_prime=0;
                break;
            } else {

            }
        }
        if (is_prime==1) {
            p[index_for_p]=var;
            index_for_p++;
        } else {

        }
    }
    int count=1;
    int i;
    for (i = M-1; i <N ; ++i) {
        if (count!=10) {
            if (i==N-1) {
                printf("%d",p[i]);
            } else {
                printf("%d ",p[i]);
            }
            count++;
        } else
        {
            if(i==N)
            {
                printf("%d",p[i]);
            }else
            {
                printf("%d\n",p[i]);
            }

            count=1;
        }
    }
    free(p);
    system ("pause");
    return 0;
}
