#include<stdio.h>
#include<math.h>
int main()
{
int N,X,Y;
int flag=0;
printf("输入正整数N(<=10000):");
scanf("%d",&N);
for(X=1;X<=N/2;X++){
for(Y=X;Y<=N/2;Y++){
if(X*X+Y*Y==N){
flag=1;
printf("%d %d\n",X,Y);
            }
        }
    }
if(!flag)
   printf("No Solution");
return 0;
}

