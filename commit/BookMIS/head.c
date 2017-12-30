#include"stdio.h"  
#include"stdlib.h"  
#include"string.h"  
#define Pquantity 3  
#define MAX 1000  
#define N 5  
int k=0;  

typedef struct    
{   int num;/*ISBN*/  
    char name[50];/*书名*/  
    char author[20];/*作者*/   
    float price;/*价格*/  
}
STUDENTS;  
  
int read_file(STUDENTS stu[])  
{ FILE *fp;  
    int i=0;  
  if((fp=fopen("stu.txt","rt"))==NULL)  
  {printf("\n\n 文件不存在！");  
   return 0;  
  }  
  while(feof(fp)!=1)  
    {  
  fread(&stu[i],sizeof(STUDENTS),1,fp);  
  if(stu[i].num==0)  
    break;  
  else  
    i++;  
  }  
  fclose(fp);  
  return i;  
}  
void save_file(STUDENTS stu[],int sum)  
{FILE*fp;  
 int i;  
 if((fp=fopen("stu.txt","wb"))==NULL)  
 {printf("文件错误!\n");  
  return;  
 }  
   for(i=0;i<sum;i++)  
     if(fwrite(&stu[i],sizeof(STUDENTS),1,fp)!=1)  
       printf("文件错误!\n");  
     fclose(fp);  
}  

