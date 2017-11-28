 #include<stdio.h>
 #include<stdlib.h>
 void Insertionsort (int arr[], int left, int right);
 int is_sorted (int arr[], int left, int right);
 int main ()
 {
 int a[100];
 int l, r, n, i;
 printf ("left=");
 scanf ("%d", &l);
 printf ("right=");
 scanf ("%d", &r); 
 printf ("n=");
 scanf ("%d", &n);
 for(i = 0; i <= n; i++)
    a[i] = rand()%(101);
 Insertionsort (a, l, r);
 if ((is_sorted (a, l, r)) == 0)
    printf ("yes\n");
 else
    printf ("no\n");
 return 0;
 }
 void Insertionsort (int arr[], int left, int right)
 {
     int i;
     for (i = right + 1; i > left; i--)
        arr[i] = arr[i-1];
     for(i = left + 2; i <= right + 1; i++)
     {
        arr[left] = arr[i];
        for (int j = i; j > left ; j--)
        {
            if (arr[j] < arr[j-1])
            {
                int m;
                m = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = m;
            }
        else
            break;
        }
     }
     for (i = left; i <= right; i++)
        arr[i] = arr[i+1];
 }
 int is_sorted (int arr[], int left, int right)
 {
    int i;
    for (i = left; i < right; i++)
    {
        if (arr[i] > arr[i + 1])
        return 1;
    }    
    return 0;
 }                                                        
