#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int n;
int main()
{
    scanf("%d",&n);
    int i,arr[n],left,right;
    scanf("%d %d",&left,&right);
    for (i=0; i<n; i++)
        scanf("%d",&arr[i]);
   /* int a;
    a=is_sorted(arr[n], left, right);*/
    if (is_sorted(arr[n],left,right)!=1)
        printf("yes");
    else
        printf("no");
    return 0;
}

int is_sorted(int arr[], int left, int right)
{
    int n,i;
    for (i=0; i<n; i++)
    {
        if(arr[i]>=arr[i+1])
            return 0;
        else
            return 1;break;
    }
}
