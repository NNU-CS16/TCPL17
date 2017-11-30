 #include <stdio.h>

 struct Student
 {
	char name[10];
	char ID[10];
	int score;
 };

 int main()
 {
        int i = 0;
        int n;
        scanf("%d", &n);
	struct Student stu[10];
	for (i = 0; i < n; ++i)
	scanf("%s %s %d", stu[i].name, stu[i].ID, &stu[i].score);
	int min = 0;
	int max = 0;
	int j, k;
	for (j = 1; j < n; ++j)
	{
		if (stu[max].score < stu[j].score)
			max = j;
	}
	for (k = 1; k < n; k++)
	{
		if (stu[min].score > stu[k].score)
			min = k;
	}
	printf ("%s %s\n", stu[max].name, stu[max].ID);
	printf ("%s %s\n", stu[min].name, stu[min].ID);
	return 0;
 }
