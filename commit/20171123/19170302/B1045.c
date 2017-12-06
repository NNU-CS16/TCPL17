#include <stdio.h>

int main()
{
        int n,i,j,k;
        scanf("%d",&n);
        int str[n];
        for(i=0;i<n;i++)
                scanf("%d",&str[i]);
        int count=0;
        int tmp;
        int arr[n];
        arr[0]=0;
        for(i=0;i<n;i++)
        {
                int flag=1;
                for(j=i-1;j>=0;j--)
                {
                        if(str[j]>str[i])
                        {
                                flag=0;
                                break;
                        }
                }
                if(flag)
                {
                        for(k=i+1;k<n;k++)
                                if(str[k]<str[i])
                                {
                                        flag=0;
                                        break;
                                }
                }
                if(flag)
                       count++;
                tmp=str[i];
                arr[count]=tmp;
                
        }
        printf("%d\n",count);
        for(i=1;i<=count;i++)
                printf("%d ",arr[i]);
        printf("\n");
        return 0;
}

        
                                  


