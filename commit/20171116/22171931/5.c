#include <stdio.h>

void SelectionSort(int arr[8], int left, int right);

int main()

{

        int arr[8];

	    int left,right,i;

	        printf("the number is:");

		    for (i = 0;i < 8; i++)

			    scanf("%d", &arr[i]);

		        scanf("%d%d", &left, &right);

			    SelectionSort(arr,left,right);

			        return 0;

}

void SelectionSort(int arr[8], int left, int right)

{

        int i,j,k,min;

	    for (i = left; i < right; i++)

		    {

			        min = i;

				        for(j = i + 1; j < (right + 1); j++)

					            {

							            if (arr[j] < arr[min])

									            min = j;

								            }

					    

					    if( min != i)

						    {

							        k = arr[min];

								        arr[min] = arr[i];

									        arr[i] = k;

										    }

					        }

	        for (i = left; i <= right; i++)

		        printf("%d", arr[i]);

} 


