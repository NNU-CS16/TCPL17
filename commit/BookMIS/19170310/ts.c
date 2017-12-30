#include<stdio.h>
#include<string.h>
void choice_1_input_new()
{
    char choice;
    FILE *P;
    BOOKINFO newbook;
    system("cls");
    while(1)
    {
        printf("enter the book number");
        scanf("%s",newbook.number);
        printf("enter the book name");
        scanf("%s",newbook.name);
        printf("enter the book list");
        scanf("%s",newbook.list);
        printf("enter the book price");
        scanf("%f",&newbook.price);
        printf("enter the book's writer");
        scanf("%s",newbook.author);
        printf("qingshuruxuyaotianjiadeshumu");
        scanf("%d",&newbook.isExit);
        printf("shifoubaoliugaishumu:")
        choice=getchar();
        while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
            choice=getchar();
        if(choice=='Y'||choice=='y')
        {
            p=fopen("e:\\bookinfo.txt","ab"); 
            fwrite(&newbook,sizeof(BOOKINFO),1,p);
            fclose(p);              
            printf("\n该条书目已添加到e:\\bookinfo.txt文件中!\n");
        }            
        else
        { 
            printf("\n本条书目未保存!\n");
        } 
        printf("\n是否继续添加书目?(Y/N)\n");
        choice=getchar(); 
        while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
            choice=getchar();
        if(choice=='Y'||choice=='y')
            continue;
        else  
            break;       
    }
    
}

void choice_2_display_all()
{ 
    FILE *p;
    int n;
    BOOKINFO bookinfo[M]; 
    int booknumber=0; 
    system("cls"); 
    p=fopen("e:\\bookinfo.txt","rb");
    while(!feof(p)) 
    {
         fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);
         booknumber++;           
    } 
    fclose(p);   
    booknumber--;
    if(booknumber==0)       
    { 
    printf("没有任何图书信息!\n\n");   
    }    
    else      
    {    
        n=0;
        printf("图书信息如下\n"); 
        printf("图书信息\n");
        printf("编号  名称  单价  作者  图书类别 \n");       
        while(n<booknumber)  
        {        
            printf("%-6s%-12s%-8.1f%s%s\n", bookinfo[n].number,bookinfo[n].name,bookinfo[n].price, bookinfo[n].auther,bookinfo[n].list);
            n++;                                            
       }   
   }     
    printf("\n\n按任意键回到主菜单!\n"); 
    getch(); 
} 
