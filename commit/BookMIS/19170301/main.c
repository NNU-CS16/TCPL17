 #include "hehe.h"
 int main ()
 {
    int n;
    printf (yemian);
    printf ("退出请选0\n");
    printf ("请选择:");
    scanf ("%d", &n);
    while (n)
    {
        if (n == 1)
            chaxun ();
        else if (n == 2)
            tianjia ();
        else if (n == 3)
            xiugai ();
        else if (n == 4)
            shanchu ();
        else if (n == 5)
            xianshi ();
        else if (n == 6)
            tongji ();
        printf (yemian);
        printf ("退出请选0\n");
		printf ("请选择:");
        scanf ("%d", &n);
    }
    return 0;        
 }

