  #include <stdio.h>
  #include <string.h>

  void reverse( char * str )
  {
      char i,j;
      for(i=0,j=strlen(str)-1; j>i; i++,j--)
         if( str[i]!=str[j] )
            {
               str[i]^=str[j];
               str[j]^=str[i];
               str[i]^=str[j];
            }
  }

  int main()
  {
    
     char str[1000];
     scanf("%s", str );
     reverse( str );
     printf("%s\n", str );
     return 0;
  } 
