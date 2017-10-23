   #include<stdio.h>
   int main()
   {
      int A,B,E,X1,X2,X3;
      scanf("%d\n",&A);
      0>A>=6;
      E=A+3;
      for(X1=A;X1<=E;X1++)
         {for(X2=A;X2<=E;X2++)
           {for(X3=A;X3<=E;X3++)
            B=X1*100+X2*10+X3;
            printf("%4d\n",B);
           }
          }
       return 0;
    }
        
