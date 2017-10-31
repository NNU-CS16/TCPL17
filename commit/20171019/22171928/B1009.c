#include <stdio.h>
int main()
{
char s[1000][81];
int i=0,j=0;
while (1)
{
scanf("%c",&s[i][j]);
if (s[i][j]==' ') { i++; j=-1; }
else if (s[i][j]=='\n')
    break; 
   j++;      
}
   j=0;
while (s[i][j]!='\n') { printf("%c",s[i][j]); j++; }
   j=0; i--;
while (i>=0)
{
 printf(" ");
while (s[i][j]!=' ') { printf("%c",s[i][j]); j++; }
   i--;      
   j=0;
}
 return 0;  
}
