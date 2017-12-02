#include<stdio.h>

void Input(struct student stu[],int n)
{
       int i;
       for(i=0;i<n;i++)
         scanf("%s%d%f",&stu[i].name,&stu[i].id,&stu[i].score);
}

void Comparehigh(struct student stu[],int n)
{
      int i,temp1,temp2;
      for(i=0;i<n;i++)
      {if(stu[i]>stu[i+1])
          temp1=stu[i].name;
          temp2=stu[i].id;
       else temp1=stu[i+1].name;
            temp2=stu[i+1].id;
      } 
       printf("最高分是%s,%d",temp1,temp2);
}
void Comparelow(struct student stu[],int n)
{
      int i,temp3,temp4;
      for(i=0;i<n;i++)
      {if(stu[i]>stu[i+1])
          temp3=stu[i+1].name;
          temp4=stu[i+1].id;
       else temp3=stu[i].name;
            temp4=stu[i].id; 
     printf("最低分是%s,%d\n",temp3,temp4);
}

int main()
{
    struct student stu[100];
    int n;
    scanf("%d",&n);
    Input(stu[100],n);

    Comparehigh(stu[100]);
    Comparelow(stu[100]);
    return 0;
}

