#include<stdio.h>
void tighten(int *,int *);
int main()
 {
	 int a,b,*c,*d;
	 c=&a;d=&b;
	 scanf("%d/%d",&a,&b);
	 if (a>b) {tighten(d,c);printf("%d/%d\n",a,b);}
	 else     {tighten(c,d);printf("%d/%d\n",a,b);}
	 return 0;
 }
 
 void tighten( int *c, int *d)
 {
	 int i;
 	for (i=(*c);i>=2;i--)
 	{
 	if ((* d)%i==0&&(* c)%i==0)
 	{(*c)=(*c)/i;(*d)=(*d)/i;break;}
 	}
 return;
 }
