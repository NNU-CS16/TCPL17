#include <stdio.h>
int main()
{
	int a,b;
	int i = 0;
	int j = 0;
	int k,m,n;
	int temp;
	int flag = 0;
	scanf("%d%d",&a,&b); 
	int str[a];
	while(i < a)
		i++;
	scanf("%d",&str[i]); 
	for(i=0;i<a;i++) 
	{
		while(j < a - i)
			j++;
		 if(str[j]>str[j+1]) 
		 {
			  temp=str[j]; 
			  str[j]=str[j+1]; 
			  str[j+1]=temp;
		 }
	}
       for(i=a-1;i>=0;i--) 
       {
		n = str[i];
 		for(j=0;j<i;j++) 
		{
			m = str[j];
			if(n <= m * b)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
			break;
       }
       if(flag)
	       printf("%d\n",i-j+1); 
       return 0;
}



