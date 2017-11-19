  #include <stdio.h>

  int main()
  {
     int a,b,d;
     int s,j,i=0;
     int c[100];

     scanf("%d %d %d",&a,&b,&d);
     s=a+b;

     if(s == 0)
         printf("0");

     while(s > 0)
     {
         c[i++] = s % d;
         s = s/d;
     }

     for( j = i-1; j >= 0; j-- )
         printf( "%d", c[j] );
         printf("\n");

     return 0;
  }

