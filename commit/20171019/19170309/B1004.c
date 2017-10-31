#include<stdio.h>  
#include<string.h>  
struct node{  
        char name[11];  
        char num[11];  
        int score;  
    };  
struct node student[100];  
int main()  
{  
    int n,i,min,max,min_num,max_num;  
    min=101;  
    max=-1;   
    scanf("%d",&n);  
    for(i=0;i<n;i++){  
        scanf("%s%s%d",&student[i].name,&student[i].num,&student[i].score);  
        if(student[i].score>max){  
            max=student[i].score;  
            max_num=i;   
        }  
        if(student[i].score<min){  
            min=student[i].score;  
            min_num=i;  
        }  
    }  
    printf("%s %s\n%s %s",student[max_num].name,student[max_num].num,student[min_num].name,student[min_num].num);  
    return 0;  
}  
