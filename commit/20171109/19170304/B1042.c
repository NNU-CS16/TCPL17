#include <stdio.h>

int main()
{
    int a[128]={0};
    char c=getchar();
    while (c!='\n')
    {
        if (c>='A'&&c<='Z')
            c+=32;
        a[c]++;
        c=getchar();
    }
    int max=-1,i,j;
    for (i='a';i<='z';i++)
        if (a[i]>max)
        {
            max=a[i];
            j=i;
        }
     printf("%c %d\n",j,a[j]);
     return 0;
}
