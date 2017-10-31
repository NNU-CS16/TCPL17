#include<stdio.h>
#define N 15
int main(int argc ,const char * argv[]){
char a[N],b[N],da,db;
char* ptr_a=a;
char* ptr_b=b;
int part_a=0,part_b=0;
scanf("%s %c %s %c",a ,&da ,b,&db);
while(*ptr_a!='\0'){
if(*ptr_a==da){
part_a=part_a*10+da-'0';
}
ptr_a++;
}
while(*ptr_b!='\0'){
if(*ptr_b==db){
part_b=part_b*10+db-'0';
}
ptr_b++;
}
printf("%d",part_a+part_b);
return 0;
}
                              
