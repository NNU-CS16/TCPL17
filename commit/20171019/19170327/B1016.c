#include<stdio.h>

 int f(long long int  A,int Da) 

{

	    int Pa=0;

	       

	      while(A)  

			     {  
			             

	     if(A%10==Da)
              Pa=Pa*10+Da;
              A/=10;
			     }
		     return Pa;

}

 int h(long long int B,int Db)    

{

	    int Pb=0;     
	         while(B)

			     {
	if(B%10==Db)
	Pb=Pb*10+Db;
	B/=10;
  }
		     return Pb;
}

int main()

{

	    long long int A,B;

	        int Da,Db;

		    scanf("%lld %d %lld %d",&A,&Da,&B,&Db);

		        printf("%d",f(A,Da)+h(B,Db));

			    return 0;
}
