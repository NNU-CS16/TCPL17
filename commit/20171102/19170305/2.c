#include<stdio.h>
void print_hex(int);

int main()
{
int a;
char w[100];
scanf("%d",&a);
print_hex(a);

return 0;
}

void print_hex(int a)
{
int i,j,k;
char w[100];
if(a<16)
printf("%d\n",a);
else
{
k=a%16;
for(i=0;i<100;i++)
{
switch(k)
{
case 0:w[i]='0';break;
case 1:w[i]='1';break;
case 2:w[i]='2';break;
case 3:w[i]='3';break;
case 4:w[i]='4';break;
case 5:w[i]='5';break;
case 6:w[i]='6';break;
case 7:w[i]='7';break;
case 8:w[i]='8';break;
case 9:w[i]='9';break;
case 10:w[i]='A';break;
case 11:w[i]='B';break;
case 12:w[i]='C';break;
case 13:w[i]='D';break;
case 14:w[i]='E';break;
case 15:w[i]='F';break;
}
a=(a-a%16)/16;
if(a<16)
break;
}
j=i+1;
switch(a)
{
case 0:w[j]='0';break;
case 1:w[j]='1';break;
case 2:w[j]='2';break;
case 3:w[j]='3';break;
case 4:w[j]='4';break;
case 5:w[j]='5';break;
case 6:w[j]='6';break;
case 7:w[j]='7';break;
case 8:w[j]='8';break;
case 9:w[j]='9';break;
case 10:w[j]='A';break;
case 11:w[j]='B';break;
case 12:w[j]='C';break;
case 13:w[j]='D';break;
case 14:w[j]='E';break;
case 15:w[j]='F';break;
}
for(i=j;i>=0;i--)
printf("%c",w[i]);
printf("\n");
}
}
