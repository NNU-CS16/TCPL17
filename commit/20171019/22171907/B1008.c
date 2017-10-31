#include <stdio.h>
#include <stdlib.h>
  
  void shift_for_1(int a[], int size)
  {
    int i, tmp;
 
      tmp = a[size-1];
  
     for(i = size - 2; i >= 0; i--)
     {
         a[i+1] = a[i]; 
     }
     a[0] = tmp;
 }
 
 void print_array(int a[], int size)
 {
     int i;
 
     for(i = 0; i < size; i++)
     {
         printf(i == size-1 ? "%d" : "%d ", a[i]);
     }
 }
 
 int main(void)
 {
     int array[100];
     int i, N, M;
 
     scanf("%d %d", &N, &M);
     for(i = 0; i < N; i++)
         scanf("%d", &array[i]);
 
     for(i = 0; i < M; i++)
     {
         shift_for_1(array, N);
     }
 
     print_array(array, N);
 
    return 0;
 }
