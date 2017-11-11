 #include <stdio.h>

 void triangle_judge(int x, int y, int z)
{
  
	if (x+y > z && x+z > y && y+z > x)
   {
		if(x == y && x == z && y == z)
		printf("dengbian");

		if ((x == y && x != z)||(x == z && x != y)||(y == z && y != x))
     		printf("dengyao");
     
		if(x != y && x != z && y != z)
    		printf("putong");
   }
}

 int main()
{
	int a, b, c, m;
	scanf("%d%d%d", &a, &b, &c);
	triangle_judge(a, b, c);
		printf("\n");
	return 0;

  
}





