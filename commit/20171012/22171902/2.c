#include<stdio.h>
int main()
{
<<<<<<< HEAD
	int n,sum=0;
	for(n=1;n<=99;n++)
      {

	if(n%3!=0) continue;
	sum+=n*(n-1)*(n-2);
      }
	printf("%d\n",sum);
	return 0;
=======
        int n,sum=0;
        for(n=1;n<=99;n++)
      {

        if(n%3!=0) continue;
        sum+=n*(n-1)*(n-2);
      }
        printf("%d\n",sum);
        return 0;
>>>>>>> 7fd41aba40d2ff457ddfc4eed172e7a4b923a49b
}

