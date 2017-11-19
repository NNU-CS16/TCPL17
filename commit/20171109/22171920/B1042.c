#include <stdio.h>
#include <stdlib.h>
int a[26];
int main(void)
{
    char c;
    int i,max=0;
    while ((c=getchar())!='\n')
    {
        if(c>='a' && c<='z')
          a[c-'a']++;
        if(c>='A' && c<='Z')
          a[c-'A']++;
    }
    for(i=0;i<26;i++)
       if(a[i]>a[max])
         max=i;
    printf("%c %d", max+97, a[max]);
	printf("\n");
    return 0;
}
