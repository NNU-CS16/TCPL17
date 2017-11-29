#include<stdio.h>
#include<math.h>
#include<string.h>
#include <malloc.h>
 int main()
{
    char *str;
    str=(char*)malloc(sizeof(char)*(pow(10,5)));
    int sum=0;
    int c1=0,c2=0;
    scanf("%s",str);
    int i;
    int length=strlen(str);
    for(i=0;i<length;i++)
   {
    if(str[i]>='A'&&str[i]<='Z')
    sum+=str[i]-'A'+1;
    else if(str[i]>='a'&&str[i]<='z')
    sum+=str[i]-'a'+1;
   }
    printf("%d\n",sum);

    while(sum!=0)
   {
    if(sum%2==0)
        c1++;
    else if(sum%2==1)
        c2++;
    sum/=2;
   }
   printf("%d %d",c1,c2);
 free(str);
 return 0;
}




