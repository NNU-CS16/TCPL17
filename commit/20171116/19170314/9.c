#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;

    char *pstr[]={"nanjing","wuxi","changzhou","shuzhou"};
    char *ptemp=NULL;  
    for(i=0;i<4;i++)
    {
        if((strcmp(pstr[j],pstr[i])<0)
        {
   	    ptemp=pstr[i];
            pstr[i]=psre[j];
            pstr[j]=ptemp;
 	}
    }
}
    for(i=0;i<5;i++)
	puts(pstr[i]);
    return 0;
} 



