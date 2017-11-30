#include <stdio.h>

void InsertionSort(int arr[5], int left, int right);

int main()

{

        int left,right,i;

	    int arr[5];

	        printf("the number is:");

		    for (i = 0; i < 5 ; i++)

			    scanf("%d", &arr[i]);

		        scanf("%d%d", &left, &right);

			    InsertionSort(arr,left,right);

			        return 0;

}

void InsertionSort(int arr[5], int left, int right)

{

        int i,j,temp;

	    for (i = left + 1; i < right; i++)

	    {

		    temp = arr[i];

		        j = i - 1;

			    while ((j >= 0) && (arr[j] > temp))

			    {

				    arr[j+1] = arr[j];

				        j--;

			    }

			        if(j != i-1)

				{

				        arr[j+1] = temp;

				}

	    }

	        for(i = left; i < (right+1); i++)

		        printf("%d",arr[i]);

}


