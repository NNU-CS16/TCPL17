#include <stdio.h>

struct _stu
{
	char name[1000];
	char num[1000];
	int score;
}stu[1000];

int main()
{

	int n, i, j;
	struct _stu t;
	scanf( "%d", &n );
	for ( i = 0; i < n; i++ )
		scanf( "%s%s%d", stu[i].name, stu[i].num, &stu[i].score );
	for ( i = n - 1; i > 0 ; i-- )
		for ( j = 0; j < i; j++ )
			if ( stu[j].score < stu[j + 1].score )
			{
				t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	printf( "%s %s\n", stu[0].name, stu[0].num );
	printf( "%s %s\n", stu[n - 1].name, stu[n - 1].num );
	
	return 0;

}
