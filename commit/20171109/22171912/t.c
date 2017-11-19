#include <stdio.h>
int main()
{
	int a[4] = {6,7,6,7};
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 4; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
	for (i = 0; i < 4; i++)
		printf("%d", a[i]);
	return 0;
}

