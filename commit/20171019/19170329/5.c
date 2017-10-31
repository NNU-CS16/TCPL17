#include<stdio.h>
int main()
{
      int i=0;int n=0;
      char s[1000];
      
      fgets(s,81,stdin);
      
      while(1)
      {
          if(s[i]!=' '&& s[i]!='.')
          {
              n++;
          }
          if(s[i]==' ')
          {
              printf("%d ",n);
              n=0;
          }
          if(s[i]=='.')
          {
              printf("%d ",n);
              break;
          }
          i++;
      }         

      
       return 0;    
}
