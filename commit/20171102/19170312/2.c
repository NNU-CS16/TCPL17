#include<stdio.h>
void print_hex(int a)
{
 int k,i=0,s[1000];
 for(;a!=0;a/=16,i++)
  s[i]=a%16;
 i-=1;
 for(;i>=0;i--)
 {
  if(s[i]==10){printf("A");}
  else if(s[i]==11){printf("B");}
  else if(s[i]==12){printf("C");}
  else if(s[i]==13){printf("D");}
  else if(s[i]==14){printf("E");}
  else if(s[i]==15){printf("F");}
  else printf("%d",s[i]);
 }
 printf("\n");
}
int main()
{
 int a;
 scanf("%d",&a);
 print_hex(a);
 return 0;
}
