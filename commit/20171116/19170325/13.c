#include <stdio.h>
#include <stdlib.h>

struct Student
{
   char name[10];
   char id[10];
   int score;
};

int main(void)
{
   int n, max, min;

   printf("Please input the number of students :\n");
   scanf("%d", &n);
   struct Student* pstu = (struct Student*)calloc(n, sizeof(struct Student));
   printf("Please input the information :\n");
   for (int i = 0; i < n; i++)
      scanf("%s%s%d", pstu[i].name, pstu[i].id, &pstu[i].score);
   max = 0;
   for (int i = 0; i < n; i++)
      if (pstu[i].score > pstu[max].score)
           max = i;
   min = 0;
   for (int i = 0; i < n; i++)
      if (pstu[i].score < pstu[min].score)
          min = i;
   printf("%s %s\n", pstu[max].name, pstu[min].id);
   printf("%s %s\n", pstu[min].name, pstu[min].id);

   return 0;
}
