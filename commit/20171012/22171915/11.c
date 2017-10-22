#include <stdio.h>
int main() {
int n,i,j,k;
int count=0;
scanf("%d",&n);
int a[4]={n,n+1,n+2,n+3};
for(i=0;i<4;i++){
for(j=0;j<4;j++){
for(k=0; k<4;k++){
if(i!=j && i!=k && j!=k){
count++;
if(count%6==0){
printf("%d%d%d\n",a[i],a[j],a[k]);
}
else {
printf("%d%d%d ",a[i],a[j],a[k]);
}
}
}
}
}
return 0; 
}

