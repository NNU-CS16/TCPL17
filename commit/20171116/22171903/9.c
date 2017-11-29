#include <stdio.h>
#include <string.h>

void Sort(char* a[], int n);
int main()
{
    char* a[] = {"nanjing", "wuxi", "xuzhou", "changzhou", "suzhou"};
    Sort(a, 5);
    return 0;
}

void Sort(char* a[], int n)
{
    int i, j, b;
    char* tem = NULL;
    for (i = 0; i < n - 1; i++)
    {
	for (j = i + 1; j < n; j++)
        {
	    if (strcmp (a[j], a[i]) < 0)
	    {
		tem = a[i];
	    	a[i] = a[j];
  	    	a[j] = tem;
	    }
	}
    }
    for (i = 0; i < n; i++)
    	printf("%s\n", a[i]);
} 
