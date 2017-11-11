  #include <stdio.h>
  void print_hex(int a);
  int main()
  {
     int x;
     scanf("%d",&x);
     print_hex(x);
     printf("\n");
     return 0;
  }

  void print_hex(int a)
  {
     int i = 0, n = 0;
     char str[10]={0};
     do
     {
         str[i] = a%16;
         a = a/16;
         i++;
         n++;
     }while(a > 0);

     for( i = n-1; i >= 0; i--)
     {
         switch(str[i])
         {
         case 0 :str[i] = '0' ;break;
         case 1 :str[i] = '1' ;break;
         case 2 :str[i] = '2' ;break;
         case 3 :str[i] = '3' ;break;
         case 4 :str[i] = '4' ;break;
         case 5 :str[i] = '5' ;break;
         case 6 :str[i] = '6' ;break;
         case 7 :str[i] = '7' ;break;
         case 8 :str[i] = '8' ;break;
         case 9 :str[i] = '9' ;break;
         case 10 :str[i] = 'A' ;break;
         case 11 :str[i] = 'B' ;break;
         case 12 :str[i] = 'C' ;break;
         case 13 :str[i] = 'D' ;break;
         case 14 :str[i] = 'E' ;break;
         case 15 :str[i] = 'F' ;break;
         }
         printf("%c",str[i]);
     }
  }
