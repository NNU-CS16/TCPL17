#include<stdio.h>

int main()
{
int arr[1000];
int m=1;
for(m=1;m<1000;m++)
scanf("%d",&arr[m]);
int left,right;
scanf("%d%d",&left,&right);
SelectionSort(arr[1000],left,right);
for(m=1;m<1000;m++)
printf("%d",arr[m]);
return 0;
}

void SelectionSort(int arr[], int left, int right)
{
int i,temp;
i=left;
for(i=left;i<right;i++)
  {if(arr[i]>arr[i+1])
    {  temp=arr[i+1];
      arr[i+1]=arr[i];
      arr[i]=temp;
    }
  else 
     { arr[i]=arr[i];
       arr[i+1]=arr[i+1];
     }
  }
}   
 
   

