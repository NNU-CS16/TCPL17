#include <stdio.h>
int main()
{
      int array[101];
     int n, m; 
     int i,j;
     scanf("%i %i", &n, &m);
     getchar();
 
     for (i = 0; i < n; i++)
    {
         scanf("%i", &array[i]);
     }

       int temp;
     for(i=0;i<m;i++)
         {
        temp = array[n-1];
        for(j=n-2;j>=0;j--)
        {
             array[j+1] = array[j];
         }
         array[0] = temp;
     }
     for(i=0;i<n;i++)
   {
         if(i==0)
             printf("%i",array[i]);
         else
            printf(" %i",array[i]);
   }
    printf("\n");
 
     return 0;
}
