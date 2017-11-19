/*求二项式系数*/
#include <stdio.h>
int BinomialCoefficient(int n, int k);

int main()
{
  int n, k;
  printf("请输入正整数n k:");
  scanf("%d%d", &n, &k);
  printf("%d",BinomialCoefficient(n, k));
  return 0;
}

int BinomialCoefficient(int n, int k)
{
  if (k == 0 || k == n)
	 return 1;
  else
	 return BinomialCoefficient(n - 1, k - 1) +
			BinomialCoefficient(n - 1, k);
}
