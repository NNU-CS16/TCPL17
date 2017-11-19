#include<stdio.h>
int main()
{
char word;
int str2[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int a=0,b=0,j;
int max=0;
//chr word;

while(word!='\n')
{
scanf("%c",&word);
if(word=='a'||word=='A')
{str2[0]++;continue;}
else if(word=='b'||word=='B')
{str2[1]++;continue;}
else if(word=='c'||word=='C')
{str2[2]++;continue;}
else if(word=='d'||word=='D')
{str2[3]++;continue;}
else if(word=='e'||word=='E')
{str2[4]++;continue;}
else if(word=='f'||word=='F')
{str2[5]++;continue;}
else if(word=='g'||word=='G')
{str2[6]++;continue;}
else if(word=='h'||word=='H')
{str2[7]++;continue;}
else if(word=='i'||word=='I')
{str2[8]++;continue;}
else if(word=='j'||word=='J')
{str2[9]++;continue;}
else if(word=='k'||word=='K')
{str2[10]++;continue;}
else if(word=='l'||word=='L')
{str2[11]++;continue;}
else if(word=='m'||word=='M')
{str2[12]++;continue;}
else if(word=='n'||word=='N')
{str2[13]++;continue;}
else if(word=='o'||word=='O')
{str2[14]++;continue;}
else if(word=='p'||word=='P')
{str2[15]++;continue;}
else if(word=='q'||word=='Q')
{str2[16]++;continue;}
else if(word=='r'||word=='R')
{str2[17]++;continue;}
else if(word=='s'||word=='S')
{str2[18]++;continue;}
else if(word=='t'||word=='T')
{str2[19]++;continue;}
else if(word=='u'||word=='U')
{str2[20]++;continue;}
else if(word=='v'||word=='V')
{str2[21]++;continue;}
else if(word=='w'||word=='W')
{str2[22]++;continue;}
else if(word=='x'||word=='X')
{str2[23]++;continue;}
else if(word=='y'||word=='Y')
{str2[24]++;continue;}
else if(word=='z'||word=='Z')
{str2[25]++;continue;}
else
continue;
}
for(j=1;j<26;j++)
{
if(str2[max]<str2[j])
{max=j;continue;}
else
{max=max;continue;}
}
printf("%c %d\n",max+97,str2[max]);

return 0;
}
