  #include <stdio.h>
  int is_pow2(int n);

  int main()
  {
    int n;
    printf("请输入一个整数:");
    scanf("%d",&n);
    int x;
    x = is_pow2(n);
    printf("%d\n",x);

    return 0;
  }

  int is_pow2(int n)
  {
    int flag;
    if(n == 1)
    {
      flag = 0;
    }
      else
      {
        int x = n,y = n;
        while(x != 1)
      {
        x = x/2;
        y = y%2;
      }
        if(y == 0)
        {
          flag = 0;
        }
          else
          {
            flag = -1;
          }
      }
    return flag;
  }


 
