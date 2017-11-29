  #include <stdio.h>
  #include <stdlib.h>
  struct Student
  {
      char name[20];
      char id[20];
      float score;
  };
  struct Student * Input(int n);
  void Output(struct Student stu[], int n);
  void Swap(struct Student *p1, struct Student *p2);
  void Sort(struct Student *pstu, int n);

  int main()
  {
      struct Student *pstus;
      int n;
      printf("请输入学生数:");
      scanf("%d",&n);
      pstus = Input(n);
      Sort(pstus, n);
      Output(pstus, n);
      free(pstus);
      return 0;
  }

  struct Student * Input(int n)
  {
      int i;
      struct Student * pstus =(struct Student *)calloc(n,sizeof(struct Student));
      for (i = 0; i < n; i++)
      {
          scanf("%s %s %f",pstus[i].name,pstus[i].id,&pstus[i].score);
      }
      return pstus;
  }

  void Swap(struct Student* p1, struct Student* p2)
  {
      struct Student temp;
      temp = *p1;
      *p1 = *p2;
      *p2 = temp;
  }
  void Sort(struct Student* pstus, int n)
  {
      struct Student* pmin,* p;
      int i;
      for (i = 0; i < n - 1; i++)
      {
          pmin = pstus + i;
          for (p = pmin + 1; p < pstus + n; p++)
          {
              if (p->score < pmin->score)
              {
                  pmin = p;
              }
          }
          if (pmin != pstus + i)
          {
              Swap(pmin, pstus + i);
          }
      }
  }

  void Output(struct Student stu[], int n)
  {
      struct Student* pstu;
      pstu = stu;
      printf("%s %s\n",(pstu + n - 1)->name,(pstu + n - 1)->id);
      printf("%s %s\n",pstu->name,pstu->id);
  }

