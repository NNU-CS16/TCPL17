#include<stdio.h>
#include<string.h>
void k_reverse(char *str,int k);

int main()
{
        char str[100];
        scanf("%s",str);
        int k;
        scanf("%d",&k);
        k_reverse(str,k);
        return 0;
}

void k_reverse(char *str,int k)
{
        int len,m,temp,i,j,n;
        len=strlen(str);
        m=len/k;
        for(i=0;i<m;i++)
        {
                for(j=i*k,n=(i+1)*k-1;j<(i+1)*k&&n>j;j++,n--)
                {
                        temp=str[j];
                        str[j]=str[n];
                        str[n]=temp;
                }
        }
        printf("%s\n",str);
                
}

        

        

