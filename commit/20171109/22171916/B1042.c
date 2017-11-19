#include<stdio.h>
#include<string.h>
#define MAX 1009
void uptolow(char *);
void scan(char *,int *);
void output(int *);
int main()
{
  char string[MAX]="\0";
  int shu[128]={0};
  gets(string);
  uptolow(string);
  scan(string, shu);
  output(shu);
  return 0;
}
void uptolow(char *ar)
{
  for (int i=0;i<strlen(ar);i++)
   {
      if((ar[i]>='A')&&(ar[i]<='Z'))
         {
          ar[i]+=32;
         }
   }
}
void scan(char *ar,int *shu)
{
   for (int i=0;i<strlen(ar);i++)
     {
       for (int j=97;j<123;j++)
          {
            if((int)ar[i]==j)
               {
                  shu[j]++;
                  break;
               }
          }
     }

}
void output(int *shu)
{
  int max=0;
  char C;
  for (int j=97;j<128;j++)
    {
      if (shu[j]>max)
         {
           max=shu[j];
           C=(char)j;
         }
    }
 printf("%c %d",C,max);
}
