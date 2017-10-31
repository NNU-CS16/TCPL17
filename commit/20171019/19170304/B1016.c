#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int da,db,numa[10]={0},numb[10]={0}, parta=0,partb=0,i; 
    char tempa,tempb;
    for(;(tempa=getchar())!=' ';) 
    {
        numa[tempa-48]++;
    }
    scanf("%d ",&da);
    for(;(tempb=getchar())!=' ';) 
    {
        numb[tempb-48]++;
    }
    scanf("%d",&db);

    for(i=0;i<numa[da];i++)     
    {
        parta=parta*10+da;
    }
    for(i=0;i<numb[db];i++)   
    {
        partb=partb*10+db;
    }

    printf("%d",parta+partb);


    return 0;
}
