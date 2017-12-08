  #include <stdio.h>
  int add( int n1, int n2 );

  int main()
  {
	int n1, n2;
	scanf("%d %d",&n1, &n2);
	printf("%d\n", add( n1, n2));
	return 0;
  }

  int add ( int n1, int n2 )
  {
	int t1 = n1 & n2, t2 = n1 ^ n2, t3, t4, t5, t6;
	while ( t5 )
	{
		t3 = t2;
		t4 = t1 << 1;
		t5 = t3 & t4;
		t6 = t3 ^ t4;
	}
	return t6;
  }
