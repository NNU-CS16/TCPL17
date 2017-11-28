#include<stdio.h>

int main()
{
        int n,m,i,j,k;
        scanf("%d",&n);
        int str[n][2];
        for(i=0;i<n;i++)
        {
                for(j=0;j<2;j++)
                        scanf("%d",&str[i][j]);
        }
        scanf("%d",&m);
        int arr[m];
        for(i=0;i<m;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        if(str[i][0]==arr[j]||str[i][1]==arr[j])
                        {
                                for(k=j+1;k<m;k++)
                                {
                                        if(str[i][0]==arr[k]||str[i][1]==arr[k])
                                        {
                                                arr[k]=0;
                                                arr[j]=0;
                                                break;
                                        }
                                }
                        }
                }
        }
        int arr2[20],num=0;
        for(i=0;i<m;i++)
        {
                if(arr[i]!=0)
                {
                        arr2[num]=arr[i];
                num++;
                }
        }
        printf("%d\n",num);
        for(i=0;i<num;i++)
        {
                printf("%d ",arr2[i]);
        }
        printf("\n");
        return 0;
}
                
        
        

                                                                 
                        

                                             
                                        
                      
