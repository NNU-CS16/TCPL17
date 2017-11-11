    #include <stdio.h>
    void print_hex(int a)
    {
        int s[20], i=0, j;
        while(1)
        { 
            s[i] = a % 16;
            i = i + 1;
            a = (a - s[i - 1]) / 16;
            if (a==0)
	        break;
        }
        i = i - 1; 
        for(j = i; j >= 0; j--)
        {
	    if(s[j] == 15)
	        printf("F");
            if(s[j] == 14)
	        printf("E");
            if(s[j] == 13)
	        printf("D");
            if(s[j] == 12)
	        printf("C");
            if(s[j] == 11)
	        printf("B");
            if(s[j] == 10)
	        printf("A");
            if(s[j] <= 9)
	        printf("%d",s[j]);
        }  
    }
    int main()
    {   
        int x;
	printf("input a: ");
	scanf("%d", &x);
	print_hex(x);
	return 0;

    }
