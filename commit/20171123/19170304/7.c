 #include <stdio.h>

 #include <stdlib.h>



 void merge(int a[], int p, int q, int r)

{

	int i, j, k, n1, n2;

	int *f, *b;

	n1 = q-p+1;

	n2 = r-q;

	f = (int *)malloc( n1 * sizeof(int) );

	b = (int *)malloc( n2 * sizeof(int) );

	

	for (i = 0; i < n1; i++)

	{

		f[i] = a[p+i];

	}

	for (i = 0; i < n2; i++)

	{

		b[i] = a[q + i +1];

	}

	i = 0;

	j = 0;

	k = p;

	while ( i < n1 && j < n2 )

	{

		if ( f[i] < b[j] )

		{

			a[k++] = f[i++];

		}

		else 

		{

			a[k++] = b[j++];

		}

	}

	while ( i < n1 )

	{

		a[k++] = f[i++];

	}

	while ( i < n2 )

	{

		a[k++] = b[j++];

	}

}

 

 void mergesort( int a[], int left, int right )

{

	int mid;

	if ( left < right )

	{

		mid = (left+right)/2;

		mergesort(a, left, mid);

		mergesort(a, mid+1, right);

		merge(a, left, mid, right);

	}

}



 int main()

{

	int a[8] = {1, 3, 6, 25, 7, 19, 0, 4};

	int i;

	mergesort(a, 0, 7);

	for (i = 0; i < 8; i++)

	{

		printf("%d ", a[i]);

	}

	printf("\n");

	return 0;

}
