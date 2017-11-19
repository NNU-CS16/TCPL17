#include<stdio.h>
#include<ctype.h>
int main()
{
  char a[100010]={0},list[255]={0};
  int sum=0,count[2]={0};
  for (int i='a';i<='z';i++)
   list[i]=i-'a'+1;
  scanf("%[^\n]",a);
  for(int i=0;a[i]!=0;i++)
   {
    a[i]=tolower(a[i]);
    sum+=list[a[i]];
   }
  for(;sum>0;sum>>=1)
   {
     count[sum&1]++;
   }
  printf("%d %d",count[0],count[1]);
  return 0;
}
