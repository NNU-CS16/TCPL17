#include<stdio.h>
int main()
{
    int n,i,j,k;
    int a[1000],b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int flag=1;
        for(j=0;j<n;j++)
	    if(i>j&&a[i]<a[j]||i<j&&a[i]>a[j])
            {
                flag=0;
                break;
            }
        if(flag)
        {
	    b[k]=a[i];
            k++;
        }
   }
    printf("%d",k);
    for ( i = k - 1; i > 0; i-- )
		for ( j = 0; j < i; j++ )
			if ( b[j] > b[j + 1] )
			{
				int temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
	
    for(i=0;i<k;i++)
        printf("%d",b[i]);
    return 0;
}
                 
