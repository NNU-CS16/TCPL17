#include <stdio.h> 
int main( )
{
char name[100][11],b[100][11]; 
int n,score[100],i=0,max=0,min=0; 
scanf("%d",&n);  
while(i<n)
{  
scanf("%s%s%d",name[i],b[i],&score[i]);  
i++;
}   
for(i=1;i<n;i++)
{
if(score[max]<score[i])
 max=i; 
if(score[min]>score[i])
 min=i;
}  
printf("%s %s\n",name[max],b[max]); 
printf("%s %s\n",name[min],b[min]); 
return 0; 
} 

