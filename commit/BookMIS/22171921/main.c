#include "head.h"
 void ent()
{
	int i;
	char arr[10];
	char str[] = "123456";
	printf("请输入密码(6位):");
	scanf("%s", arr);
	for (i = 0; i < 3; i++)
	{
		gets(arr);
		if (strcmp(arr,str) == 0)
		{
			printf("登录成功！\n");
			menu();
			int n;
			printf("退出请选7\n");
			printf("请选择:");
			scanf("%d", &n);
			while(n)
			{
				if (n == 1)
					add();
				if (n == 2)
					display();
				if (n == 3)
					search();
				if (n == 4)
					delete();
				if (n == 5)
					modify();
				if (n == 6);
					statistics();
				menu();
				printf("退出请选7\n");
				printf("请选择：");
				scanf("%d", &n);
			}
		}
		if (i < 2)
		{
			printf("输入错误，重新输入！\n");
		}
	}
}


int main()
{
    int i;
    while(1)
    {
        printf("|=============Welcome to e-library system=============|\n");
        printf("|=====================Y(1) 进入系统=====================|\n");
        printf("|=====================N(0) 退出系统=====================|\n");
		printf("\t\t\t\t请输入您的选择:");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            ent();
            break;
            case 0:
	        printf("谢谢使用！\n");
	        exit(0);
        }
    }
}

