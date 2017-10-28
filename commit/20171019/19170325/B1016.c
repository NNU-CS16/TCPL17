#include<stdio.h>
#include<string.h>

int zhao(char a[],char c)

{

  int i,k=0;

  for(i=0;i<strlen(a);i++)

  if(a[i]=c)     k++;

  return k;

}

int shu(int k,char c)
{

   if(k==0)  return 0;

    else

   { (void*)(int)c;

   int i,j=10;

   for(i=1;i<k;i++)

    {

      c=c*j+c;

      j=j*10;

    }

     return c;

   }
}

  int main()
{

   char ar[100000],br[100000],a,b;

   int m,n;

   printf("please input A DA B DB:\n");

   scanf("%s%c%s%c",ar,&a,br,&b);

   m=shu(zhao(ar[100000],a),a);

   n=shu(zhao(br[100000],b),b);

   printf("%d",m+n);

   return 0;

}
