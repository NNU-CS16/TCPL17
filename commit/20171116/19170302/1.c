#include <stdio.h>

int is_sorted(int arr[ ], int left, int right);

int main()
{
        int arr[100];
        int i=0,result;
        for(;;i++)
        {
                scanf("%d",&arr[i]);
                if(getchar()=='\n')
                        break;
        }                                                                  
        int left,right;
        scanf("%d%d",&left,&right);
        result=is_sorted(arr,left,right);
        printf("%d\n",result);
        return 0;
}

int is_sorted(int arr[ ], int left, int right)
{
        int i,flag=1;
        for(i=left-1;i<right;i++)
        {
                if(arr[i]>arr[i+1])
                {
                        break;
                        flag=-1;
                }
        }
        return flag;
}
