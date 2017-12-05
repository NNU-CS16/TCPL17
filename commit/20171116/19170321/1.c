    #include <stdio.h>
    int is_sorted(int arr[], int left, int right);
    int main()
    {
        int str[20];
        int a, b, i;
        printf ("input the number string;");
        for (i = 0;i < 20; i++)
            scanf("%d",&str[i]);
       printf ("input left,right:");
        scanf ("%d%d", &a, &b);
        if (is_sorted(str, a, b))
           printf("in order\n");
        else
           printf("not in order\n");
        return 0;
    }
    int is_sorted(int arr[], int left, int right)
    {
        int i;
        for (i = left;i < right; i++)
           {
               if (arr[i] >arr[i+1])
                   return 0;
          }
        return 1;
   }
