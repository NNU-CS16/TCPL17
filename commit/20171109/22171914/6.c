#include <iostream>
using namespace std;
static int step = 0;
void move(int n, char source, char dest)
{
  if (source=='B'||dest=='B')

  {
	step++;
	printf("step %d, 将第%d号盘子从 %c 移动到 %c\n", step, n, source, dest);
  }

  else
  {
	step++;
	printf("step %d, 将第%d号盘子从 %c 移动到 %c\n", step, n, source, 'B');
	step++;
	printf("step %d, 将第%d号盘子从 %c 移动到 %c\n", step, n, 'B', dest);
  }
	
}
void hannuota(int n, char sour,  char dest)
{
	if (n == 1)
	{
		move(n, sour, dest);
	}
	else
	{
          if (sour == 'B'||dest=='B')
	  {
		char another = ((sour == 'A' || dest == 'A') ? 'C': 'A');
		hannuota(n - 1, sour, another);
		move(n, sour, dest);
		hannuota(n - 1,another, dest);
	  }
	  else
	  {
		hannuota(n - 1, sour, dest);
		move(n, sour, 'B');
		hannuota(n - 1, dest,  sour);
		move(n, 'B', dest);
		hannuota(n - 1, sour,  dest);
	  }
		
	}
}
int main()
{
  int n; 
  cin >> n;
  //'A' - left, 'B' - 'mid', 'C' - 'right'
  hannuota(n, 'A',  'C');
  printf("Total step is %d\n", step);
  system("pause");
  return 1;
}
