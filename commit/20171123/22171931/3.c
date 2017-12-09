    #include <stdio.h>

int sum(int n);

int main()

{

        int n,a;

	    scanf("%d", &n);

	        a = sum(n);

		    printf("%d", a);

		        return 0;

}

int sum(int n)

{

        int s = n;

	    n && (s += sum(n-1));

	        return s;

}


