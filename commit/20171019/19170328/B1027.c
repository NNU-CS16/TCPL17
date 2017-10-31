#include<stdio.h>
int main()
char(ch)
{
	int number,temp=7,a=3;//最少的字符数 最小的行数//
	char ch;//定义输入的字符//
	int yemp1,yemp;
	scanf("%d %c",&number,&ch); //输入 N(<=1000)和一个符号（*）//
        do 
	{if(number>=temp)
	{
	if (number<(temp+2*(a+2)))
	break;//打印不了更大的行数就停止//
	{else if (number==(temp+2*(a+2)))
	{temp=(temp+2*(a+2));
	a=a+2;break;}
        else{temp=(temp+2*(a+2));
	    a=a+2; }
	}
	}while(1);
        for(int i=0;i<a;i++)
	{	yemp1=i;
	if (yemp1>a/2)
		yemp1=a-yemp1-1;
        }
         for(int j=0;j<a;j++)
	 {
yemp2=j; if (yemp2>a/2)
{yemp2=a-yemp2-1;}
if(yemp2<yemp1)
{if(j>a/2){printf("\n");
	  break;
	  }else{printf("%c",ch);}
}if(j==a-1){printf("\n");}
	 }
}

{
printf("%d/n",number-temp);
}
