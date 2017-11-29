/*
   分析：

1.可能两个数的长度不同，那么就需要在一个数加完之后把另一个数的剩下的数全加上

2.判断最高位，如果最高位有进位，那么还需要把进位位加上。
   */
#include<stdio.h>
#include<string.h>
int main()
{
	    char a[200],b[200];//定义字符串数组
		int c[500]; 
		scanf("%s%s",a,b);//输入字符串数组
		int i,j,k=0,r=0;
		int lena,lenb;
		lena = strlen(a);
		lenb = strlen(b);
		for(i=lena-1,j=lenb-1;i>=0&&j>=0;i--,j--)
		{  
		int p=(a[i]-'0')+(b[j]-'0')+r;    
		r=p/10;//进位  
		c[k++]=p%10;//余数加到数组中  
		}
		while(i>=0){   //如果b中的数加完了  
		int p=(a[i]-'0')+r;  
		r=p/10;  
		c[k++]=p%10;  
		i--;  
		}  
		while(j>=0){    //如果a中的数加完了  
		int p=(b[j]-'0')+r;  
		r=p/10;  
		c[k++]=p%10;  
		j--;  
		}  
		if(r){//判断最高位有没有进位
		c[k++]=r;  
		}  
		for(int i=k-1;i>=0;i--){//输出结果 
		printf("%d",c[i]);
		}
		return 0;
}
