#include <stdio.h>

int binary_search_iterative(int arr[10], int left, int right, int query);

int binary_search_recursive(int arr[10], int left, int right, int query);

int main()

{

        int left,right,query,i,m,n;

	    int arr[10];

	        printf("the number is:");

		    for (i = 0; i < 10; i++)

			    scanf("%d", &arr[i]);

		        scanf("%d%d%d", &left, &right, &query);

			    m = binary_search_iterative(arr,left,right,query);

			        n = binary_search_recursive(arr,left,right,query);

				    printf("%d%d", m, n);

				        return 0;

}

int binary_search_iterative(int arr[10],int left, int right, int query)

{

        int mid,flag,a;

	    a = left;

	        while (left <= right)

		        {

			            mid = (left + right)/2;

				            if (query == arr[mid])

						        {

							                flag = (1);

									            break;

										            }

					            if (query > arr[mid])

							            left = mid + 1;

						            else right = mid - 1;

							       }

		   if(flag == 1)

		          return mid + 2 - a;

		      else return -1;

}

int binary_search_recursive(int arr[10], int left, int right, int query)

{

        int mid,a,b;

	    a = left;

	        b = right;

		    while (left <= right)

		    {

			    mid = (left + right)/2;

			        if (query == arr[mid])

				        return mid + 2 - a;

				    else if (query > arr[mid])



					     left = mid + 1,

						       binary_search_recursive(arr,left,right,query);



				        else if (query < arr[mid])

					         right = mid - 1,

						            binary_search_recursive(arr,left,right,query);

					     if (query > arr[right] || query < arr[left])

						      return -1;

		    }

		     

}             
