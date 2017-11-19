   #include <stdio.h>
   void move (char soucse, char target);
   void hanoi (int n, char source, char help, char target);

   int main()
   {
      int n;
      scanf("%d",&n);
      hanoi( n, 'A', 'B', 'C');
      return 0;
   }

   void move (char source, char target)
   {
      printf("%c->%c\n", source, target);
   }

   void hanoi (int n, char source, char help, char target)
   {
      if(n==1)  move ( source, target );
      else
      {
          hanoi ( n-1, source, target, help );
          move (source ,target );
          hanoi ( n-1, help, source, target );
      }
   }

          
 
