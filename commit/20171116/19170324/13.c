#include <stdio.h>
#include <string.h>

struct Student
{
	char name[11];
	char id[11];
	int score;
};

int main()
{
	char max_id[11], max_name[11], min_id[11], min_name[11];
	int i, n, max_score, min_score;
	scanf("%d", &n);
	struct Student stu1;
	for (i = 1, max_score = 0, min_score = 100; i <= n; i++)
	{
		scanf("%s%s%d", stu1.name, stu1.id, &stu1.score);
		if (stu1.score > max_score)
		{
			strcpy (max_id, stu1.id);
			strcpy (max_name, stu1.name);
			max_score = stu1.score;
		}
		if (stu1.score <= min_score)
		{
			strcpy (min_id, stu1.id);
            strcpy (min_name, stu1.name);
            min_score = stu1.score;
		}
	}

	printf("%s %s\n", max_name, max_id);
	printf("%s %s\n", min_name, min_id);
	return 0;
}
