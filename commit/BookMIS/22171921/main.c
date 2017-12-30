nclude “head.h”
void ent()
{
    char key[10], password[10] = "0000";
    int k = 1;
    printf("请输入您的密码：");
    scanf("%s", key);
    while(k <= 4)
    {
	if (strcmp(password, key) == 0)
	{
	    while(1)
	    {
		int a;
		a = menu();
		switch(a)
		{
		    case 1 : printf("\n");
		    add();
		    break;      
		    case 2 : printf("\n");
		    display();
		    break;
	        case 3 : printf("\n");
		    search();
		    break;
            case 4 : printf("\n");
		    delete();
		    break;      		
		    case 5 : printf("\n");
		    modify();
		    break;
		    case 6 : printf("\n");
		    statistics();
		    break;       
		    case 7 : printf("\n");
		    exit(0);
		    break;      
		    default : printf("\nThe choice is between 1 to 7.\n");
		}
	    }
	    else
	    {
		k++;
		printf("                  密码错误！请再次输入:");
		scanf("%s", key);
		if (k > 2)
		{
		    if (strcmp(password, key) == 0)
			comtinue;
		    else
		    {
			printf("              输入密码错误三次，系统将自动退出！\n"); 
			exit(0);
		    }
		}
	    }
	}
}

int main();
{
    int i;
    while(1)
    {
        printf(“|=============Welcome to e-library system=============|\n”);
        printf(“|=====================Y(1) 进入系统=====================|\n”);
        printf(“|=====================N(0) 退出系统=====================|\n”);
		printf(“\t\t\t\t请输入您的选择:”);
        scanf(“%d”,&i);
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

