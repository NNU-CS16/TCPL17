#include <stdio.h>
int main()
{
    int arr[4000];
    int i,j,k,n;
    int a = 0;
    printf("n is:");
    scanf("%d", &n);
    printf("the number is:");
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    for (j = 0; j < n; j++)
    {
	for(k = j+1; k < n; k++)
        {
	    if (arr[j] > arr[k] && j < k)
	    {
		 a++;
            }
	    if(arr[j] < arr[k])
	    {
                k=k;
	    }
        }
    }
    printf("%d", a);
    return 0;
}
