#include<stdio.h>
int main()
{
 int N,M;
 int a[105];
 scanf("%d %d",&N, &M);
    M = M % N; 
  for( int i = 0 ; i < N; i++)
{
     scanf("%d",a+i);    
}

 if(M == 0){
  for(int i = 0 ; i < N; i++){
      if( i == N-1){
        printf("%d\n",a[i]);
           
}
else
{
printf("%d ",a[i]);
}
}
} 
else
{
   for(int j = 0 ; j < M; j++){
      for(int i = N-1 ; i > 0; i--){
          int temp = a[i];
              a[i] = a[i-1];
              a[i-1] = temp;
}
}

   for(int i = 0 ; i < N; i++){
 if( i == N-1){
       printf("%d\n",a[i]);
}
else
{
      printf("%d ",a[i]);
}
} 
}   
     return 0;
}
