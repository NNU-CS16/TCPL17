  #include <stdio.h>
  int LCM(int,int);
  int max(int,int);
  int main()
  {
     int x, y;
     scanf("%d%d",&x,&y);
     int c=LCM(x,y);
     printf("%d\n",c);
  }

  int LCM(int m,int n)
  {
     int i=max(m,n);
     while(1)
     {
         if(i%m==0 && i%n==0)
         { 
             return i;
             break; 
         }
         i++;
     }
  }

  int max(int m,int n)
  {
     if(m>n)
     {
         return m;
     }
     else
     {
        return n;
     }
  }
