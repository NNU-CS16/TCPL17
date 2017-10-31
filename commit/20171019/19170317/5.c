#include<stdio.h>
int main()
{
    char c;
    int cnt=0,count=0;
    do
    {
      scanf("%c",&c);
      if(cnt==0 && c==' ') continue;
      if(cnt==0 && c=='.') break;
      if(c==' ')
      {
        if(count==0)
          printf("%d",cnt);
        else
          printf(" %d",cnt);
        cnt=0;
        ++count;
        continue;
      }
      if(c=='.')
      {
        if(count==0)
          printf("%d",cnt);
        else
          printf(" %d",cnt);
          break;
      }
      ++cnt;
    }while(c!='.');

    return 0;
}
