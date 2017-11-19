  #include <stdio.h>

  void print_hex( int a)
  {
      int t,i,mask=1;
      t=a;
      while(t>16)
      {
         t/=16;
         mask*=16;
      }
         do
         {
             i=a/mask;
             switch(i)
             {
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
                default:printf("%c",i+48);break;
             }
             a%=mask; mask/=16;
          }
         while(mask>0);
  }
  
   int main()
   {
      int a;
      scanf("%d",&a);
      printf("0x");
      print_hex( a );
      return 0;
   }
      
  

      
