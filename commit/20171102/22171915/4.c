  #include<stdio.h>
  int count1_in_bin(int n);

  int n;	  
  int main()
  {
	  printf("输入一个整数:");
	  scanf("%d", &n);
	  count1_in_bin(n);
	  return 0;
  }

  int count1_in_bin(int n)
  {
	  int temp;
	  int cnt = 0;
	  while (n != 0)
	  {
		  temp = n%2;
		if (temp == 1)
		{
			cnt++;
		}
		  n = n/2;
	  }
	  printf("其二进制中1的个数:%d\n", cnt);
  }

