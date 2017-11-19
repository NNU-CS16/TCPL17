  #include <stdio.h>
  void print_hex(int a);

  int main()
  {
    int a;
    printf("请输入一个十进制整数:");
    scanf("%d",&a);
    print_hex(a);

    return 0;
  }

  void print_hex(int a)
  {
    char A[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};	
    char B[50];
    int x,y,i = -1;
    for(x = a;x != 0;x = x/16)
  {
    y = x%16;
    i++;
    B[i] = A[y];

  }
    for(i;i >= 0;i--)
  {
    printf("%c",B[i]);
  }
    printf("\n");
  }
