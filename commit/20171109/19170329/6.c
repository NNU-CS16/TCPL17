  #include <stdio.h>
  void move (char source,  char target);
  void hanoi (int n, char source, char help, char target);
  int i=0; 
 
  int main()
  {
     int n;
     scanf("%d",&n);
     hanoi (n, 'A', 'B', 'C');
     printf("Total steps: %d\n",i);
     return 0;
  }

  
  void move (char source,  char target)
  {
     printf("%c->%c\n",source,  target);
     i++;
  }

  void hanoi (int n, char source, char help, char target)
  {
    
     if(n==1) 
     {  
           if(help='B')
           { 
               move( source, help );
               move( help, target );
           }
           else   move( source, target );
     }
     else
     {
           
           
               hanoi( n-1, source, help, target );
               move( source, help );
               hanoi( n-1, target, help, source );
               move ( help, target );
               hanoi (n-1, source, help, target );
           
           
      
     }
  } 
             
      
     
     
 

