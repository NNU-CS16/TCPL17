  #include <stdio.h>
  void my_strcpy(char* dest, const char* src);

  int main()
  {
      const char src[20] = "hello world";
      char dest[20];
      my_strcpy(dest, src);
      puts(dest);
      return 0;
  }
<<<<<<< HEAD
  
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
  void my_strcpy(char* dest, const char* src)
  {
      int i;
      for (i = 0; src[i] != '\0'; i++)
      {
          dest[i] = src[i];
      }
      dest[i] = src[i];
<<<<<<< HEAD
  } 
    
=======
  }

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
