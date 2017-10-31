#include <stdio.h>
int main()
{

int nA, nB;
int Da, Db;
int tA = 0,tB = 0;
int x;
scanf("%d %d %d %d", &nA,&Da,&nB,&Db);
while (nA != 0)
{
if (nA % 10 == Da)
 {
    tA = tA * 10 + Da;
    }
    nA =nA/ 10;
   }
while (nB != 0)
 {
  if (nB%10 == Db)
  {
   tB = tB * 10 + Db;
   }
   nB =nB/ 10;
    }
x = tA + tB;
printf("%d\n", x);
return 0;
}
