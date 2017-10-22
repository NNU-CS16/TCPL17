#include <stdio.h>
double han(double x)
{
	  
          double f,a,b,c,d;
	  f=a*x*x*x+b*x*x+c*x+d;
	  return f;
}
int main()
{
	int a,b,c,d;
	double m,n,p;

	scanf("%d %d %d %d %f %f",&a,&b,&c,&d,&m,&n);

	while(n-m>0.1)
	{
               p=(m+n)/2;

	       if (han(p)==0)
		  printf("%.2f\n",p);
	       else if (han(p)*han(m)<0)
	               n=p;
	           else  m=p;
	}

       p=(m+n)/2;
       printf("%.2f\n",p);

       return 0;

}
		       































	     }
	printf("%.2f\n",(m+n)/2);

return 0;
}

