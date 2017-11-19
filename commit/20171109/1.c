#include <stdio.h>
int Fib(int n,int a,int b);

<<<<<<< HEAD
int main()
{
    printf("Fib(5)=%d\n",Fib(5,1,1));
=======
int main( )
{
    printf ("Fib(5) = %d\n",Fib(5 , 1, 1));
>>>>>>> f6b02895d7440e538751aea811fce59416bd138c
    return 0;
}

int Fib(int n,int a,int b)
{
<<<<<<< HEAD
    if (n<=2)
        return b;
    return Fib(n-1,b,a+b);
=======
    if (n <= 2)
	return b;
    return Fib(n-1, b, a+b);
>>>>>>> f6b02895d7440e538751aea811fce59416bd138c
}
