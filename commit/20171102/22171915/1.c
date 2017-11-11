  #include <stdio.h>

  void triangle_judge(int a, int b, int c)
  {
 	if (a == b && b == c) 
	printf("三角形为等边三角形\n");
	else if (a == b || b == c || a == c)
	printf("三角形为等腰三角形\n");
	else
 	printf("三角形为普通三角形\n");
  }
 
  int main()
 	{
 	int a, b, c;
 	printf("输入三边长度:");
 	scanf("%d %d %d",&a,&b,&c);
 	if(a+b > c && a+c > b && b+c > a)
 	triangle_judge(a,b,c);
 	else
 	printf("不能构成三角形\n");
 	return 0;
 	}
 
