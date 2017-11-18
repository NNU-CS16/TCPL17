  #include <stdio.h>
  void f(int n);
  void sort();
  int a[4];
  int t1,t2;

  int main()
  {
     int n,t;
     scanf("%d",&n);
     if( n%1111==0)
     {
	 printf("%04d-%04d=0000\n", n, n);
         return 0;
     }
     
     else
     {
         while( t!=6174 )
         {
              f( n );
              t=t1-t2;
              printf("%04d-%04d=%04d\n", t1, t2, t );
              n = t;
         }
     }
     
     return 0;
  }

   
  void f ( int n )
  {
     
     a[0] = n / 1000;
     a[1] = n / 100 % 10;
     a[2] = n / 10 % 10;
     a[3] = n % 10;
     sort ( );
     t1 = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
     t2 = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
     
  }

  void sort ()
  {
     int i,j;
     int v;

     for(i = 0; i < 3; i++)
        for(j = i+1; j < 4; j++)
        {
           if(a[i] > a[j])
           {
               v = a[i];
               a[i] = a[j];
               a[j] = v;
           }
        }
  } 
  
         
     
     
