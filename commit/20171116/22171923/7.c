#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char a[1000];
    int n,i,m,j,x = 0,y = 0;
    int s1[1000],a1[1000], b[1010] = {0},b1[1010];
    int mod = 0, temp;
    scanf("%s%s",s,a);
    x = strlen(s);
    y = strlen(a);
    for (i = x - 1,j = 0; (i >= 0)&&(j < x); i--,j++)
    {
	s1[j] = s[i]-'0';
    }
    for (j = y - 1, i = 0; (j >= 0)&&(i < y); j--,i++)
    { 
        a1[i] = a[j]-'0';
    }
    for (m = 0,i = 0,j = 0; (i < x)||(j < y); i++,j++,m++)
    {
	b[m] = (s1[i] + a1[j] + mod) % 10;
	mod = (s1[i] + a1[j] + mod) / 10;
    }
    printf("%d\n",m);
    for (i = m - 1,j = 0; (i >= 0)&&(j < m); i--,j++)
    {
	b1[j] = b[i];
    }
    for (i = 0; i < m; i++)
        printf("%d",b1[i]);
    return 0;
}
