#include<stdio.h>
#include<string.h>  
int main() 
{  
char str[81]; 
char str2[80][81]; 
char *p;  
int i,count=0; 
gets(str);  
p=strtok(str," "); 
while(p!=NULL)
{   
strcpy(str2[count],p);  
p=strtok(NULL,"\n"); 
count++;  
}  
for(i=count-1;i>0;i--)  
    printf("%s",str2[i]); 
    printf("%s",str2[0]); 
    return 0; 
} 
