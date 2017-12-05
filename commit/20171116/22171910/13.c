/*通过结构体处理信息并得出学生成绩最值*/
#include <stdio.h>
#include <stdlib.h>
struct Student
{
  char name[10];
  char id[10];
  int score;
}a[1000];

int main()
{
  int n, i, max = 0, min = 0;
  printf("请输入学生数:");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
	scanf("%s%s%d", a[i].name, a[i].id, &a[i].score);
	if (a[i].score > a[max].score)
	   max = i;
	if (a[i].score < a[min].score)
	   min = i;
  }
  printf("%s %s\n", a[max].name, a[max].id);
  printf("%s %s\n", a[min].name, a[min].id);
  return 0;
}

