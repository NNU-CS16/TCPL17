 #include <stdio.h>
 #include <string.h>

 int is_sorted(int arr[], int left, int right)
 {
    int a = left, b, c;
      b = arr[a];
      c = arr[a + 1];
      for (a = left; a <= right; ++a)
      {
         if (b > c)
         {   
           return 1;
           break;
         }
        else
          return 0;
      }             
 }

 int main()
 {
    int a, d, i, left, right, len;
    int arr[10000];
    char arr1[10000];
    printf("请输入数组：");
    scanf("%s", arr1);
    printf("请输入判断区间：");
    scanf("%d %d", &left, &right);
    len = strlen(arr1);
    for (i = 0; i < len; ++i)
    {
         d = arr1[i];
         arr[i] = d;
    }

    if (is_sorted(arr, left, right) == 0)
       printf("有序\n");
    else
       printf("无序\n");
    return 0;
 }
