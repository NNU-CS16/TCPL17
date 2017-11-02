#include<stdio.h>
int main()
{
    int N,X,Y,flag=0;
    
    scanf("%d",&N);
    for(X=1;X<=100;X++)
    {
       for(Y=X;Y<=100;Y++)
       {
          if(X*X+Y*Y==N)
          
          printf("%d %d\n",X,Y);     //X与Y之间有一个空格
	  flag=1;      	               						        }
    }
    if(flag==0)
    printf("No solution");
    
    return 0;
}
