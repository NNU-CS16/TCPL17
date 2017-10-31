#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    char name[1000][20];
    char num[1000][20];
    int grade[1000];
    int nmax=0;
    int cmax=0;
    int nmin=100;
    int cmin=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",&name[i],&num[i],&grade[i]);
        if(grade[i]>=nmax)
        {
            nmax=grade[i];
            cmax=i;
        }
        if(grade[i]<=nmin)
        {
            nmin=grade[i];
            cmin=i;
        }
    }
    printf("%s %s\n",name[cmax],num[cmax]);
    printf("%s %s\n",name[cmin],num[cmin]);
}
