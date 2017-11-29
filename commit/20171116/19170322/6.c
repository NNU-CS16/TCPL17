    #include <stdio.h>
    #include <string.h>
    void k_reverse(char* str, int k)
    {
	char str1[strlen(str)];
	int x, y, z, i;
	z = (strlen(str) - strlen(str) % k) / k;
	for(i = 0; i <= z - 1; i++)
	{
	    for(x = i * k + k - 1, y = i * k; x >= i * k; y++, x--)
	        str1[y] = str[x];
	}
	for(i = z * k; i <= strlen(str) - 1; i++)
	    str1[i] = str[i];
	for(i = 0; i <= strlen(str) - 1; i++)
	    printf("%c", str1[i]);
    }
    int main()
    {
	int k;
        char* str;
	printf("please input str:");
	gets(str);
	printf("please input k:");
	scanf("%d", &k);
        k_reverse(str, k);
        return 0;
    }
