#include <stdio.h>  
typedef struct Student
{  
    char* name[11];  
    char* id[11];  
    int score;  
}Student;  
  
int main() 
{  
    int n;  
    scanf("%d\n", &n);  
    Student stu[n];  
    for (int i = 0; i < n; ++i)   
        scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].score);    
    Student *first, *last;  
    first = last = &stu[0];  
    for (int i = 1; i < n; ++i) {  
        if (stu[i].score > first->score)  
            first = &stu[i];  
        if (stu[i].score < last->score)  
            last = &stu[i];  
    }  
    printf("%s %s\n", first->name, first->id);  
    printf("%s %s\n", last->name, last->id);  
      
    return 0;  
}   
    


