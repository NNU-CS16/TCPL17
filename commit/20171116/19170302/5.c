#include <stdio.h>

void selectionsort(int a[], int left, int right);

int main()
{
        int a[100];
        int i,n;
        for(i=0;;i++)
        {
                scanf("%d",&a[i]);
                if(getchar()=='\n')
                        break;
        }
        int left,right;
        scanf("%d%d",&left,&right);
        selectionsort(a,left,right);
        for(i=left-1;i<right;i++)
                printf("%d ",a[i]);
        printf("\n");
        return 0;
}

void selectionsort(int a[], int left, int right)
{
        int i,j,min,temp;
        for(i=left-1;i<right;i++)
        {
                min=i;
                for(j=i+1;j<right;j++)
                        if(a[min]>a[j])
                                min=j;
                if(min!=i)
                {
                        temp=a[min];
                        a[min]=a[i];
                        a[i]=temp;
                }
        }
        
}

