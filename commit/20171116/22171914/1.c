#include <stdio.h>
#include <string.h>
int is_sorted(int arr[],int left,int right);
int main()
{
  
  int is_sorted;

  return 0;
}
int is_sorted(int arr[],int left,int right)
{
  int r=1;
  for(int i=0;left<=i<right;i++)
  {
    if(arr[i]<arr[i+1])
    {
      printf("是升序");     
   
    }
    else
    printf("不是升序");
  } 
}  
