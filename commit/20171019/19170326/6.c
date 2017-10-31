#include<stdio.h>
char differ(int x,int y,int z)
{
	  if(x==y&&x!=z)
		    return 'C';
	    if(x==z&&x!=y)
		      return 'B';
	      if(y==z&&y!=x)
		        return 'A';
}
int main()
{
	  int a,b,c;
	    scanf("%d%d%d\n",&a,&b,&c);
	      printf("%c",differ(a,b,c));
	        return 0;
}
