#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book
{
    char name[50];
    char writer[50];
    int ISBN;
    double price;
    struct book *Next;
}BookNodeList;

BookNodeList *array_information[10]={0};    //保存找到的指针

//创建图书链表
BookNodeList makelist()
{
    BookNodeList *P;
    P=malloc(sizeof(BookNodeList));
    P->Next=NULL;
    printf("~~~~~~图书链表创建成功\n");
    return P;
}

//判断链表是否为空
int IsEmpty(BookNodeList* L)
{
    return L->Next==NULL;
}

//通过图书名查找图书
void findwithname(BookNodeList* L)
{
    char name[50];
    printf("请输入需要查找的图书名字为");
    gets(name);

    BookNodeList *P;
    P=L->Next;
    while ( p!=NULL&&strcmp(P->bookname,name))
        P=P->Next;
    if (p==NULL)
    {
        printf("没有找到需要的图书");
        return findwithname(L);
    }

    printf("%s %s %f %d",P->name,P->writer,P->price,P->ISBN);
}

//通过图书编号查找图书
BookNodeList *findwithISBN(BookNodeList *L)
{
    int ISBN;
    printf("请输入需要查找的图书的ISBN为");
    scanf("%d",&ISBN);
    getchar();

    BookNodeList *P;
    P=L->Next;
    while (P!=NULL&&ISBN!=P->ISBN)
        P=P->Next;
    if (P==NULL)
    {
        printf("没有找到图书！");
        return BookNodeList *findwithISBN(L);
    }

    return P;
}

//通过图书作者查找图书
void findwithwriter(BookNodeList *L)
{
    char writer[50];
    printf("请输入需要查找图书的作者");
    gets(writer);
    int i;
    int j=0;
    BookNodeList *P;
    P=L->Next;

    while (P!=NULL)
    {
        if (!strcmp(writer,P->writer))
            P=array_information[j++];
        P=P->Next;
    }

    for (i=0; i<j; i++)
    {
        printf("%d %f %s\n",array_information[i]->ISBN,array_information[i]->price,array_information[i]->name,array_information[i]->writer);
    }
}

//添加图书项目
void AddItem(BookNodeList *L)
{
    

    BookNodeList *P=NULL;
    P=(BookNodeList *)malloc(sizeof(BookNodeList));
    if (P=NULL)
    {
        printf("不能 malloc");
        exit(0);
    }
    P->Next=NULL;
    printf("请输入图书的ISBN");
    scanf("%d",&P->ISBN);
    getchar();

    printf("请输入价格");
    scanf("%f",&P->price);
    getchar();

    printf("请输入图书名称");
    gets(P->name);


    printf("请输入作者名称");
    gets(p->writer);

    while (L->Next!=NULL)
    {
        L=L->Next;
    }
    L->Next=P;

    FILE *fp;
    if ((fp=fopen("图书记录.csv"),"a")==NULL)
    {
        printf("不能打开这个文件\n");
        printf("程序关闭\n");
        exit(1);
    }
    else
        printf("文件打开成功");

    //将数据添加进文件里
    fprintf(fp,"%d %f %s %s",P->ISBN,P->price,P->name,P->writer);
    printf("添加成功\n");

    if (fclose(fp)==EOF)
    {
        printf("文件未成功关闭!\n");
        exit(1);
    }
}


//根据图书编号删除图书信息

void deletebook(BookNodeList *L)
{
    int ISBN;
    printf("请输入需要删除的图书的编号");
    scanf("%d",&ISBN);
    getchar();

    if ( findwithISBN(L)==NULL )
    {
        printf("ERROR"\n);
        return deletebook(L);
    }

    FILE *fp;
    if ((fp=fopen("图书记录.csv","w+"))==NULL)
    {
        printf("不能打开此文件\n");
        exit(1);
    }


    BookNodeList *pr=L;
    BookNodeList *P=pr->Next;


    while (p->ISBN!=ISBN)
    {
        per=P;
        P=P->Next;
    }

    pr->Next=p->Next;
    P->Next=NULL;
    free(P);
    printf("删除成功啦！开心～～～～～～\n");
    save(L);

    if (fclose(fp)==EOF)
    {
        printf("文件没有被成功关闭！");
        exit(1);
    }
}

//修改图书信息
void modify(BookNodeList *L)
{
    int ISBN;
    printf("请输入需要查找的图书的ISBN");
    scanf("%d",&ISBN);
    getchar();
    BookNodeList *P;
    P=P->Next;

    while (P!=NULL&&P->key!=key)
        P=L->Next;

    if (P==NULL)
    {
        printf("没有找到这本书籍");
        return modify(L);
    }

    printf("请输入修改后的书籍名字为");
    gets(P->name);

    printf("请输入修改书籍的作者名");
    gets(P->writer);

    getchar();
    printf("图书信息修改成功");

    save(L);

}

//读取文件信息，初始化图书链表
void initialize_record(BookNodeList *L)
{
    BoodNodeList bookinformation;
    //
    FILE *fp;
    if ((fp=fopen("图书数据.csv","r"))==NULL)//对文件是否成功打开的测试
    {
        printf("不能打开这个文件\n");
        printf("程序关闭\n");
        exit(2);
    }
    else 
        printf("文件打开成功")；

    while (fscanf(fp,"%d %s %s"),&bookinformation.ISBN,&bookinformation.name,&bookinformation.writer)
    {
        //给
        BookNodeList *P;
        P=malloc(sizeof(BookNodeList));
        P->Next=NULL;


        strcpy(P->name,bookinformation.name);
        P->ISBN=bookinformation.ISBN;
        strcpy(P->writer,bookinformation.writer);
        

        L->Next=P;
        L=P;


    }
    


    if (fclose(fp)==EOF)
    {
        printf("文件未成功关闭");
        exit(5);
    }
    

}



//保存当前的图书链表到文件中去
void save(BookNodeList *L)
{
    FILE *fp;
    if ( (fp=(fopen("图书数据.csv","w")))==NULL )
    {
        printf("不能创建文档！");
        getchar();
        exit(4);
    }
    else 
    {
        printf("文档创建成功");
        getchar();
    }


    while (L->Next!=NULL)
    {
        fprintf(fp,"%d %s %s",L->Next->ISBN,L->Next->name,L->Next->writer)
        L=L->Next;
    }
    printf("图书数据存储成功!");


    //关闭文件
    if ( fclose(fp)==EOF )
    {
        printf("文件没有成功关闭！");
        exit(5);
    }

}




void gongneng()
{
    do 
    {
        menu();
        cmd=getchar();
        getchar();
        if ( cmd =='q')
        {
            saveAs();
            printf("謝謝使用\n");
            break;
        }
        switch (cmd)
        {
            case 'a':
                printf("查詢的書籍爲:\n");
                findwithname(L);


                break;
            case 'b':
                printf("添加的書籍信息爲");
                Additem(L);


                break;
            case 'c':
                printf("修改的圖書的ISBN爲");
                modify(L);

                break;
            case 'd':
                printf("刪除的圖書條目的ISBN爲");
                deletebook(L);


                break;
           
           /* case 'f':
            


                break;*/
            default:errCmd();
        }
}

int menu()
{
    printf("######圖書管理系統######\n");
    printf("(a)查詢圖書條目\n");
    printf("(b)添加圖書條目\n");
    printf("(c)修改圖書條目\n");
    printf("(d)刪除圖書條目\n");
    printf("(e)顯示圖書條目\n");
    printf("(f)圖書記錄的統計信息\n");
    printf("(q)退出系統")
    printf("請輸入命令：");
    
}

int errCmd()
{
    printf("Error Command!\n");
    return -1;
}

int main()
{
    BookNodeList* L;
    L=makelist();
    initialize(L);
    gongneng();
    return 0;
}
