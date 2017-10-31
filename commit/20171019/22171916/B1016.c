#include<stdio.h>
#include<string.h>
int main()
{
 int i,b,j,k,temp,count=0,sum=0;
 char A[12];char a[12];
 char D;
 b=0;
 for (i=1;i<=2;i++)
  {
    k=0;
    scanf("%s",A);
    scanf(" %c",&D);
    temp=strlen(A);
   
    for(j=0;j<temp;j++)
       {
           if(D==A[j])
             {

               count++;
              }
       }
   
    if (count!=0)
      {
          for(j=1;j<=count;j++)
            {
                   k=k*10+D-'0';
            }
      sum=sum+k;
      count=0;


      }

  }
printf("%d\n",sum);
return 0;

}
