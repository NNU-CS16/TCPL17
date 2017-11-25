 #include <stdio.h>
 #include <stdlib.h>

 struct Student
 {
	char name[20];
	char id[10];
	float score;
 };
 struct Student * input(int n);
 void Swap(struct Student *p1, struct Student *p2);
 void sort(struct Student *pstu, int n);
 
 int main()
{
	struct Student *pstus;
	int n;
	printf("请输入学生数：");
	scanf("%d", &n);
	pstus = input(n);
	sort(pstus, n);
	free(pstus);

	return 0;
}

 struct Student * input(int n)
{
	int i;
	struct Student *pstus = (struct Student *)calloc(n, sizeof(struct Student));
	for (i = 0; i < n; i++)
		scanf("%s%s%f", pstus[i].name, pstus[i].id, &pstus[i].score);
	printf("\n");
	return pstus;
}

 void Swap(struct Student *p1, struct Student *p2)
{
	struct Student tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

 void sort(struct Student *pstu, int n)
{
	struct Student *pmin, *p;
	int i;
	for (i = 0; i < n-1; i++)
	{
		pmin = pstu + i;
		for (p = pmin+1; p < pstu+n; p++)
			if (p->score < pmin->score)
				pmin = p;
		if (pmin != pstu+i)
			Swap(pmin, pstu+i);
	}
		printf("%s, %s, %f\n", (pstu+n-1)->name, (pstu+n-1)->id, (pstu+n-1)->score);
		printf("%s, %s, %f\n", pstu->name, pstu->id, pstu->score);
}
