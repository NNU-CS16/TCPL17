#include <stdio.h>
   void sort(int n);
   int down();
   int up();
   int a[4];
   int main()
   {
       int n,i,x;
       scanf ("%d",&n);
       i =  n;
       while(1)
       {
           sort(i);
           x = down () - up ();
            if (x == 0)
           {
               printf("%d - %d = 0000\n",down(),up());
               break;
           }
           printf("%d - %04d = %d\n", down() ,up(), x);
           if (x == 6174)
                break;
           i = x;
       }
       return 0;
    }
    int down()
    {
        return a[0] * 1000 + a[1] *100 + a[2] *10 + a[3];
    }
    int up()
    {
        return a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    }
    void sort(int n)
    {
        a[0] = n / 1000;
        a[1] = (n / 100) % 10;
        a[2] = (n / 10) % 10;
        a[3] = n % 10;
        int i,j,temp;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                 if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] =a[j+1];
                    a[j +1] = temp;
                }

     }
