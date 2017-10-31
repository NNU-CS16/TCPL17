#include <stdio.h>
int main(){
	int N,M;
  int i,j;
  int a[101];
  scanf("%d %d",&N,&M);
  getchar();
  for(i=0;i<N;i++)
  scanf("%d",&a[i]);
  for(i=0;i<M;i++){
    int x=a[N-1];
    for(j=N-2;j>=0;j--)
    {a[j+1]=a[j];}
    a[0]=x;
      }
  for(i=0;i<N;i++){
  if(i==0)printf("%d",a[i]);
  else printf(" %d",a[i]);}

  return 0;
}
