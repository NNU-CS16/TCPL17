 #include <stdio.h>
 int arr[100000]= { 0 };
 int arr1[50000][2] = { 0 };
 int main()
{
  
  
    int N, M, i, flag = 0;
    int num1, num2;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &num1, &num2);
    	arr1[i][0] = num1;
    	arr1[i][1] = num2;
    }
    	scanf("%d", &M);
    for (i = 0; i < M; i++)
    {
    	scanf("%d", &num1);
    	arr[num1] = -1;
    }
    for (i = 0; i <N; i++)
    {
    	if (arr[arr1[i][0]] == -1 && arr[arr1[i][1]] == -1)
    	{
      		arr[arr1[i][0]] = 0; arr[arr1[i][1]] = 0; M -= 2;
    	}
    }
  	printf("%d\n", M);
    for (i = 0; i < 100000; i++)
    {
    	if (arr[i] == -1)
        if (!flag)
	    {
        	printf("%05d", i); flag = 1;
        }
        else
        printf(" %05d", i);
    }
	printf("\n");
	return 0;
}
