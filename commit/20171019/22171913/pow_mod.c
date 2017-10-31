#include<stdio.h>
#include<math.h>
int mod(int a,int b,int c);
int main()
{
    int a,b,c;
    
    printf("please input:a,b,c");
    scanf("%d%d%d\n",&a,&b,&c);
   
    printf("输出m的值=%d",(a^b)%c);
    return 0;
}
    int mod(int a,int b,int c)
    {
	int m;
	m=(a^b)%c;
	return m;
    }
    
