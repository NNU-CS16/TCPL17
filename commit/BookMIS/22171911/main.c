#include "head.c"
int main( )
{
    menu( );
    char n;
    scanf ("%c", &n);
    switch(n)
    {
	case 'c':
	    chaxun( );
	case 't':
	    tianjia( );
        case 'x':
	    xiugai( );
	case 's':
	    shanchu( );
	case 'h':
	    xianshi( );
	case 'j':
	    tongji( );
        dafault:
	    printf ("Errer");
    }
    return 0;
}
int menu( )
{
    printf ("===图书管理===\n");
    printf ("(c)查询\n");
    printf ("(t)添加\n");
    printf ("(x)修改\n");
    printf ("(s)删除\n");
    printf ("(h)显示\n");
    printf ("(j)统计\n");
    printf ("输入命令：");
    return 0;
}
