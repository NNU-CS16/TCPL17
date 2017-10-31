#include<stdio.h>  
        struct student
        {  
        char name[15];  
        char stuid[15];  
        int score;  
        }stuinfo,max,min;   
      
 int main(){  
        int i,n;  
        max.score=0;  
        min.score=100;  
        scanf("%d",&n);  
        for(i=0;i<n;i++){  
            scanf("%s%s%d",&stuinfo.name,&stuinfo.stuid,&stuinfo.score);  
            if(stuinfo.score<=min.score)  
                min=stuinfo;  
            if(stuinfo.score>=max.score)    
                max=stuinfo;    
        }  
        printf("%s %s\n",max.name,max.stuid);     
        printf("%s %s",min.name,min.stuid);  
        return 0;  
    }  
