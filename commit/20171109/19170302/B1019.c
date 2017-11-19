#include<stdio.h>
void sort(int str[]);
int main()
{
        int n,p,q;
        int str[4]; 
        scanf("%d",&n);
        do{
        for(int i=0;i<4;i++)
        {
                str[i]=n%10;
                n=n/10;
        }
        
              
                sort(str);
                p=str[0]*1000+str[1]*100+str[2]*10+str[3];
                q=str[3]*1000+str[2]*100+str[1]*10+str[0];
                printf("%d-%d=%d\n",p,q,p-q);
                n=p-q;
        }while((p-q)!=6174&&(p-q)!=0);
        return 0;
}

void sort(int str[])
{
        int i,j,temp;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                if(str[j]<str[j+1])
                {
                        temp=str[j];
                        str[j]=str[j+1];
                        str[j+1]=temp;
                }
                }
        }
}



                        

                

