#include<stdio.h>
int main()
{
   char sent[81];
   char word[9][9];
   int i,j,m,n=0;
   gets(sent);
   for(i=0;i<10;++i)
{
   for(j=0;j<10,n<81;++j,++n)
{
   word[i][j]=sent[n];
   if(sent[n]==' ')
   break;
}
   if(word[i][0]==' ')
   m=i-1;
   break;
}
   for(m=8;m>=0;--m)
{
   for(j=0;j<21;++j)
{
   printf("%c",word[m][j]);
   if(word[m][j]==0)
   break;
}
}
   printf("\n");
   return 0;
}
