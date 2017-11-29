  #include <stdio.h>
  
  struct student
  {
	char name[10];
	char id[10];
	int score;
  };

  int main()
  {
	struct student stu[100], maxstu, minstu;
	int n,i;
	scanf("%d", &n);
	for( i = 0; i < n; i++ )
		scanf("%s %s %d", stu[i].name, stu[i].id, &stu[i].score);
	for( i = 0; i < n; i++ )
	{
		if( i == 0 )
		{
			maxstu = stu[i];
			minstu = stu[i];
		}

		else
		{
			if( maxstu.score < stu[i].score )
				maxstu = stu[i];
			if( minstu.score > stu[i].score )
				minstu = stu[i];
		}
	}

	printf("%s %s\n", maxstu.name, maxstu.id);
	printf("%s %s\n", minstu.name, minstu.id);

	return 0;
  }
