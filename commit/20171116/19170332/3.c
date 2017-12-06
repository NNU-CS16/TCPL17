#include<stdio.h>

int main()
{
int arr[1000];
 int i=1;
  for(i=1;i<=1000;i++)
     scanf("%d",&arr[i]);
int left,right,query;
scanf("%d%d%d",&left,&right,&query);
printf("递归版本的结果：%d\n",binary_search_recursive(arr[1000],left,right,query));
printf("循环迭代版本的结果:%d\n", binary_search_iterative(arr[1000],left,right,query));
return 0;
}
int binary_search_iterative(int arr[1000], int left, int right, int query)
{
int i,j;
i=left;
j=right;
for(i=left;i<=(right+left)/2;i++)
{   for(j=left;left>=(right+left)/2;j--)
     {    if(arr[i]==query)
         return i;
       if(arr[j]==query)
         return j;
       else return -1;}
}
}
int  binary_search_recursive(int arr[1000], int left, int right, int query)
{
   int middle=(left+right)/2;
   if(left>right)
      {
        return -1;
      }
   if(arr[middle]=query)
      {
        return middle;
      }
   if(arr[middle]<query)
      { binary_search_recursive(arr[1000],middle+1,right,query);}
   if(arr[middle]>query)
      { binary_search_recursive(arr[1000],left,middle-1,query);}
}
