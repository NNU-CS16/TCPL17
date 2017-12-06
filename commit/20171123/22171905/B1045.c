#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) {
	long *pa, *pb;
	pa = (long *)a;
	pb=(long *)b;
	return *pa - *pb;
}


int main()
{
	int N,i,j,k,l,m,n,flagl,flagr;
	  //  long a[1000], b[1000];
    long *a,*b;
	int c[100001];
	scanf("%d", &N);
	b= (long *)malloc(sizeof(long)*N);
	a = (long *)malloc(sizeof(long)*N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	qsort(b, N, sizeof(long), cmp);
	j = 0;
					    //从1中找出固定位置的指针c[k]
	for (i = 0; i < N; i++) {
		if (a[i] == b[i]) {

			c[j] = i;
			j++;
		}
								    
								      
		}
	//初始化标志变量
	m = j;
	n = 0;
	flagl = 0;
	flagr = 0;

	for (k = 0; k < j; k++) {

		for (l = n; l < c[k]; l++) {
			if (a[c[k]] < a[l]) {
				c[k]=-1;
				m--;
				flagl = 1;
				break;
			}
													    }
										      //记录下左边最大指针n,下一次比较从上次最大的地方开始
		if (flagl = 0) {
			n = c[k];
		}
		else {
			n = l;
			flagl = 0;
		}


		}
	for (k = j - 1; k >= 0; k--) {
		for (i = N-1; i < c[k]; i++) {
			if (a[c[k]]>a[i]) {
				c[k] = -1;
				m--;
				flagr = 1;
				break;
			}

		}
	}

	printf("%d\n", m );

										  
	for (i=0; i<j; i++) {
		if (c[i] != -1) {
			if (i != j - 1)
				printf("%d ", a[c[i]]);
			else
				printf("%d", a[c[i]]);

		}

	}
	printf("\n");
											  
	return 0;
}
