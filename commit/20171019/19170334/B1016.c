#include <stdio.h>
#include <math.h>
main(void){
        char a[11],c[11];
        char b,d;
        int i,j;
        int x,y;
        int e,f;
	long int s1=0;
	long int s2=0;
	int m=0;
	int n=0;
  scanf("%s %c %s %c",a,&b,c,&d);
        e=b-'0';
        f=d-'0';
  for(i=0;a[i]!='\0';i++){
  if(a[i]==b)
    m++;}
  for(x=0;x<m;x++)
{s1+=e*pow(10,x);}
for(j=0;c[j]!='\0';j++){
  if(c[j]==d)
	n++;}
  for(y=0;y<n;y++)
        {s2+=f*pow(10,y);}
  printf("%ld",s1+s2);
}

