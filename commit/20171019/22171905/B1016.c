#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
{
asm using namespace std;
int main(){

/*
    string str1;
    string str2;
    char da;
    char db;
    cin>>str1>>da>>str2>>db;
    */
    char str1[MAX];
    char str2[MAX];
    char da;
    char db;
    int a=0;
    int b=0;
    scanf("%s %c %s %c",str1,&da,str2,&db);
}
// printf("%s\n",str1);
   // cout<<str1<<str2<<da<<db<<endl;
    for(int i=strlen(str1)-1;i>=0;i--)
    {
            if(str1[i]==da)
            {
               a=a*10+da-'0';
              // cout<<a<<endl;
            }
    }
                for(int i=strlen(str2)-1;i>=0;i--)
    {
            if(str2[i]==db)
            {
               b=b*10+db-'0';
              // cout<<b<<endl;
               }
               }
             //  cout<<a<<endl;
              // cout<<b<<endl;
  printf("%d\n",a+b);
   system("pause");
            
}
