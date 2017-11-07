#include<stdio.h>
#include<math.h>
int main()
{
  int X,Y,Z,temp=0;
  scanf("%d",&Z);
  for(X=1;X<sqrt(Z);X++)
     for(Y=floor(Z);Y>=X;Y--)
         if(pow(X,2)+pow(Y,2)==Z)
           {
             printf("%d %d\n",X,Y);
             temp=1;
           }
          if (temp!=1)
          printf("No Solution");
  return 0;
}
