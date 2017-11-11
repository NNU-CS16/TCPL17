  #include <stdio.h>
  int count1_in_bin(int n);

  int main()
  {
    int n,x;
    printf("请输入一个整数:");
    scanf("%d",&n);
    x = count1_in_bin(n);
    printf("%d的二进制中1的个数为%d\n",n,x);

    return 0;
  }

  int count1_in_bin(int n)
  {
    int x = n,y = n,i = 0,j = 0;
    for(x = n;x != 0;x = x/2)
  {
    y = x %2;
    i++;
      if(y == 1)
      {
        j++;   
      }
  }
  return j;
  }
