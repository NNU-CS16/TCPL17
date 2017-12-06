#include <stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query);

int main ()
{
   int arr[10];
   int left, right, query;
   int i,res_i;

   printf ("请输入数据：");
   for (i = 0; i <= 9; i++)
     scanf ("%d",&arr[i]);

   printf ("输入区间：");
   scanf ("%d%d",&left,&right);

   printf ("输入要查找的数据：");
   scanf ("%d",&query);


   res_i =binary_search_iterative(arr,left,right,query);

   printf ("%d\n" ,res_i);
   return 0;

}


int binary_search_iterative(int arr[],int left,int right,int query)
{
    int low=left,high=right,mid;
    int flag = 0;


    while (low<=high)
    {
        mid =(low+high)/2;
        if (query==arr[mid])
        {
            flag=1;
            break;
        }
        if (arr[mid]>query)
            high=mid- 1;
        if (arr[mid]<query)
            low=mid+1;
    }

    if (flag==1)
      return mid;
    else
        return -1;
}



