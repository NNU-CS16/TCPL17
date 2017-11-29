#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    int a[n-1],b[n-1];
    for(i=0;i<n;i++)
    {
    scanf("%d %d",&a[i],&b[i]);
    }
    scanf("%d",&m);
    int c[m];
    int j;
    for(j=0;j<m;j++)
        scanf("%d",&c[j]);
    for(j=0;j<m;j++)
    {
        int flag=1;
        for(i=0;i<m;i++)
        {
         if(c[j]==a[i]||c[j]==b[i])
         {
             
             flag=0;
             
         }
         if(flag==0)
         {   
              int sign=1;
              if(c[j]==a[i])
              {  
                  for(int k=0;k<m;k++)
                   {
                       if(b[i]==c[k])
                        sign=0;
                       
                       
                   }
                   if(sign==1)
                       flag=1;
              }
              if(c[j]==b[i])
              {
	         
                  for(int k=0;k<m;k++)
                  {
                      if(a[i]==c[k])
                      sign=0;
                      
                      
                  }
                  if(sign==0)
	              flag=1;
              }
        }
        }
         if(flag==1)  
             printf("%d ",c[j]);
        
    }
    return 0;
}
