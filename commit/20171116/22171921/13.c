#include<stdio.h>

struct student 
{  
    char name[15];  
    char id[15];  
    int score;  
}
    stu[10005];  
  
int main() 
{  
    int n, max = 0, min = 0;  
    scanf("%d", &n);    
    for(int i = 0; i < n; i++) {  
        scanf("%s", stu[i].name);  
        scanf("%s", stu[i].id);  
        scanf("%d", &stu[i].score);  
        if(stu[i].score > stu[max].score) max = i;  
        if(stu[i].score < stu[min].score) min = i;  
    }     
    printf("%s %s\n", stu[max].name, stu[max].id);  
    printf("%s %s\n", stu[min].name, stu[min].id);  
    return 0;  
}  
