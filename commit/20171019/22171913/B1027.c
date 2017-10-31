#include<stdio.h>
#include<math.h>
int main()
{
    char c;
    int m,N,i,j;
    scanf("%d %c",&N,&c);
    for(m=1;2*m*m-1<=N;m++)
	 m--;
       for(i=0;i<2*m-1;i++)
       {
          for(j=0;j<m-1-fabs(m-1-i);j++)       //打印空格
                putchar(' ');
          for(j=0;j<2*fabs(m-1-i)+1;j++)
	        putchar(c);
	        putchar('\n');
       }
    printf("%d",N-2*m*m+1);
    return 0;
}

