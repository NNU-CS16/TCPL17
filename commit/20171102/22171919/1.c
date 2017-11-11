  #include <stdio.h>
  void triangle_judge(int a, int b, int c);

  int main()
  {
    int a,b,c;

    printf("请输入三个整数:");
    scanf("%d%d%d",&a,&b,&c);
    triangle_judge(a,b,c);
  
    return 0;
  }

  void triangle_judge(int a, int b, int c)
  {
    int x;
    if(a>>b)
  {    x = a;a = b;b = x;}
    if(b>>c)
  {    x = b;b = c;c = x;}
    
    if((a+b) <= c)
  {
    printf("不能构成三角形\n");}
    else if(a == b && b == c && c ==a)
  {
    printf("等边三角形\n");}
    else if(a == b || b == c ||c == a)
  {
    printf("等腰三角形\n");}
    else printf("普通三角形\n");
  }









