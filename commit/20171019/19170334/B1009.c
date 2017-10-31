#include <stdio.h>
#include <string.h>
int main(){
  char a[90];
  gets(a);
  int len=strlen(a);
  int i;
  int g=0;
  int h=0;
  char b[90][90];
  for(i=0;i<len;i++){
    if(a[i]!=' ')
      b[g][h++]=a[i];
    else {b[g][h]='\0';
  							g++;
          h=0;}  
         }
  for(i=g;i>=0;i--){
  printf("%s",b[i]);
    if(i>=1)
    printf(" ");
  }
}
