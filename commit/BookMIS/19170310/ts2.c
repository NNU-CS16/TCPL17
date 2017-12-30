#include "stdafx.h"  
#include "iostream"  
struct book
{  
    int id;  
    char title[20];  
    char author[20];  
    double price;  
    char state[20];  
    int student_id;  
    char student_name[20];  
    struct book* next;  
}  
  
struct student
{  
    int id;  
    char name[20];  
    char sex[10];  
    char borrow_book[30];  
    struct student* next;  
}  
void Print_Book(struct book *head_book);  
void Print_Student(struct student *head_student);  
struct book *Create_New_Book();
struct student *Create_New_Student();
struct book *Insert_Book(struct book *head_book,struct book *new_book);   
(struct book *head_book,struct book *new_book);
struct student *Insert_Student(struct student *head_student,struct student *new_student);   
struct book *Search_Book_ById(int id,struct book *head_book);   
struct book *Search_Book_ByTitle(char *title,struct book *head_book);   
struct book *Search_Book_ByPrice(double price_h,double price_l,struct book *head_book);    
struct book* Delete_Book(int id,book* head_book);  
struct student *Search_Student(int id,struct student *head_student);  
struct student* Delete_Student(int id,student* head_student);  
  
void Lent_Book(int id,int student_id,struct book *head_book,struct student *head_student);  
void Back_Book(int id,int student_id,struct book *head_book,struct student *head_student);  
  
int main()  
{  
    struct book* head_book,*p_book;  
    struct student* head_student, *p_student;  
    int choice, f, id, student_id;  
    int m = 1;  
    char name[20],sex[10];  
    char title[20];  
    double price_h,price_l,price;  
    char author[20];  
    int size_book=sizeof(struct book);  
    int size_student=sizeof(struct student);  
    printf("\n欢迎您第一次进入图书管理系统!\n\n");    
    printf("----->[向导]----->[新建图书库]\n\n");    
    printf("注意:当输入图书编号为0时,进入下一步.\n\n");    
    head_book=Create_New_Book();    
    system("cls");  
    //Print_Book(head_book);  
    printf("\n欢迎您第一次进入图书管理系统!\n\n");    
    printf("----->[向导]----->[新建会员库]\n\n");    
    printf("注意:当输入会员学号为0时,进入主菜单.\n\n");  
    head_student=Create_New_Student();    
    system("cls");  
    //Print_Student(head_student);  
    do{  
        printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
        printf("\n");    
        printf("\t\t\t[1]:借书办理\t");printf(" [6]:还书办理\n");    
        printf("\n");    
        printf("\t\t\t[2]:查询图书\t");printf(" [7]:查询学生\n");    
        printf("\t\t\t[3]:添加图书\t");printf(" [8]:添加学生\n");    
        printf("\t\t\t[4]:删除图书\t");printf(" [9]:删除学生\n");    
        printf("\t\t\t[5]:遍历图书\t");printf("[10]:遍历学生\n\n");    
        printf("\t\t\t〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓\n\n");    
        printf("\t\t\t0:退出\n\n");    
        printf("请选择<0~10>:");    
        scanf("%d",&choice);  
        switch(choice){  
        case 0:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("\n谢谢您的使用!\n\n");    
            break;  
        case 1:  
            system("cls");  
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");  
            printf("输入借出图书编号:\n");    
            scanf("%d",&id);  
            printf("输入借入学生学号：\n");  
            scanf("%d",&student_id);  
            Lent_Book(id,student_id,head_book,head_student);  
            break;  
        case 2:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("1.按编号查询\n\n");    
            printf("2.按名称查询\n\n");    
            printf("3.按价格区间查询\n\n");    
            printf("0.返回主菜单\n\n");    
            printf("请选择:");    
            scanf("%d",&f);    
            if(f==1){    
                printf("请输入查询图书编号:");    
                scanf("%d",&id);    
                printf("相关信息如下:\n\n");    
                head_book=Search_Book_ById(id,head_book);    
                break;    
            }    
            else if(f==2){  
                getchar();  
                printf("请输入查询图书名称:");    
                gets(title);  
                printf("相关信息如下:\n\n");    
                head_book=Search_Book_ByTitle(title,head_book);    
                break;    
            }    
            else if(f==3){    
                printf("请输入最高价格:");    
                scanf("%lf",&price_h);    
                printf("请输入最低价格:");    
                scanf("%lf",&price_l);    
                printf("相关信息如下:\n\n");    
                head_book=Search_Book_ByPrice(price_h,price_l,head_book);    
                break;    
            }    
            else if(f==0){    
                break;    
            }    
            break;  
        case 3:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("请输入图书编号:");    
            scanf("%d",&id);   
            printf("请输入图书名称:");    
            scanf("%s",title);    
            printf("请输入作者名字:");    
            scanf("%s",author);   
            printf("请输入单价:");    
            scanf("%lf",&price);    
            printf("\n");  
            struct book *ptr_b;  
            for(ptr_b=head_book;ptr_b;ptr_b=ptr_b->next)    
            {  
                if(ptr_b->id==id)    
                {    
                    printf("此编号图书已存在\n");    
                    m=0;    
                    break;    
                }    
            }    
            if(m){    
                p_book=(struct book *)malloc(size_book);    
                strcpy(p_book->title,title);    
                p_book->id=id;    
                p_book->price=price;    
                p_book->student_id=-1;    
                strcpy(p_book->author,author);    
                strcpy(p_book->state,"存在");      
                strcpy(p_book->student_name,"待定");    
                Insert_Book(head_book,p_book);  
                printf("\n添加图书成功!\n\n");    
            }    
            break;  
        case 4:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("输入删除图书编号:\n");    
            scanf("%d",&id);    
            head_book = Delete_Book(id,head_book);  
            break;  
        case 5:   
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            Print_Book(head_book);    
            break;  
        case 6:  
            system("cls");  
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");  
            printf("输入归还图书编号:\n");    
            scanf("%d",&id);  
            printf("输入归还学生学号：\n");  
            scanf("%d",&student_id);  
            Back_Book(id,student_id,head_book,head_student);  
            break;  
        case 7:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");        
            printf("请输入查询学生学号:");    
            scanf("%d",&id);    
            printf("相关信息如下:\n\n");    
            head_student=Search_Student(id,head_student);    
            break;  
        case 8:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("请输入学生编号:");    
            scanf("%d",&id);   
            printf("请输入学生姓名:");    
            scanf("%s",name);    
            printf("请输入学生性别:");    
            scanf("%s",sex);     
            printf("\n");  
            struct student *ptr_s;  
            for(ptr_s=head_student;ptr_s;ptr_s=ptr_s->next)    
            {  
                if(ptr_s->id==id)    
                {    
                    printf("此学号学生已存在\n");    
                    m=0;    
                    break;    
                }    
            }    
            if(m){    
                p_student=(struct student *)malloc(size_student);     
                p_student->id=id;      
                strcpy(p_student->name,name);    
                strcpy(p_student->sex,sex);      
                strcpy(p_student->borrow_book,"无");    
                head_student=Insert_Student(head_student,p_student);    
                printf("\n添加学生成功!\n\n");    
            }    
            break;  
        case 9:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            printf("输入删除学生学号:\n");    
            scanf("%d",&id);    
            head_student = Delete_Student(id,head_student);  
            break;  
        case 10:  
            system("cls");    
            printf("\n\t\t\t〓〓〓〓〓图书管理系统〓〓〓〓〓\n\n");    
            Print_Student(head_student);  
        }  
    }while(choice!=0);  
    return 0;  
}  
  
struct book *Create_New_Book(){  
    struct book *head_book,*p_book;    
    int id, tag;    
    double price;    
    char title[20],author[20];    
    int size_book=sizeof(struct book);    
        
    head_book=NULL;    
    printf("请输入图书编号:");    
    scanf("%d",&id);   
    printf("请输入图书名称:");    
    scanf("%s",title);    
    printf("请输入作者名字:");    
    scanf("%s",author);   
    printf("请输入单价:");    
    scanf("%lf",&price);    
    printf("\n");   
    while(true){    
        p_book=(struct book *)malloc(size_book);    
        strcpy(p_book->title,title);    
        p_book->id=id;    
        p_book->price=price;    
        p_book->student_id=-1;    
        strcpy(p_book->author,author);    
        strcpy(p_book->state,"存在");      
        strcpy(p_book->student_name,"待定");    
        head_book=Insert_Book(head_book,p_book);  
        printf("是否继续？继续输入1，退出按任意键\n");  
        scanf("%d",&tag);  
        if(tag!=1){  
            break;  
        }  
        printf("请输入图书编号:");    
        scanf("%d",&id);   
        printf("请输入图书名称:");    
        scanf("%s",title);    
        printf("请输入作者名字:");    
        scanf("%s",author);   
        printf("请输入单价:");    
        scanf("%lf",&price);    
        printf("\n");   
    }   
    return head_book;  
}  
  
struct student *Create_New_Student(){  
    struct student *head_student,*p_student;    
    int id, tag;  
    char sex[10];  
    char name[20];    
    int size_student=sizeof(struct student);    
        
    head_student=NULL;    
    printf("请输入学生编号:");    
    scanf("%d",&id);   
    printf("请输入学生姓名:");    
    scanf("%s",name);    
    printf("请输入学生性别:");    
    scanf("%s",sex);     
    printf("\n");   
    while(true){    
        p_student=(struct student *)malloc(size_student);     
        p_student->id=id;      
        strcpy(p_student->name,name);    
        strcpy(p_student->sex,sex);      
        strcpy(p_student->borrow_book,"无");    
        head_student=Insert_Student(head_student,p_student);   
        printf("是否继续？继续输入1，退出按任意键\n");  
        scanf("%d",&tag);  
        if(tag!=1){  
            break;  
        }  
        printf("请输入学生编号:");    
        scanf("%d",&id);   
        printf("请输入学生姓名:");    
        scanf("%s",name);    
        printf("请输入学生性别:");    
        scanf("%s",sex);     
        printf("\n");   
    }   
    return head_student;  
}  
  
struct book *Insert_Book(struct book *head_book,struct book *new_book){  
    struct book *p,*q;  
  
    p=q=head_book;  
      
    if(head_book==NULL)
    { 
        head_book=new_book;  
        new_book->next = NULL;  
    }
    else
    {  
        while((new_book->id>p->id)&&(p->next!=NULL)){  
            q = p;  
            p = p->next;  
        }  
        if(new_book->id<=p->id){  
            new_book->next=p;  
            if(head_book==p)  
                head_book=new_book;  
            else  
                q->next = new_book;  
        }else{  
            p->next=new_book;  
            new_book->next=NULL;  
        }  
    }  
    return head_book;  
};  
  
struct student *Insert_Student(struct student *head_student,struct student *new_student){  
    struct student *p,*q;  
  
    p=q=head_student;  
      
    if(head_student==NULL)
    {
        head_student=new_student;  
        new_student->next = NULL;  
    }
    else
    {  
        while((new_student->id>p->id)&&(p->next!=NULL)){  
            q = p;  
            p = p->next;  
    }  
        if(new_student->id<=p->id){  
            new_student->next=p;  
            if(head_student==p)  
                head_student=new_student;  
            else  
                q->next = new_student;  
        }
         else
        {  
            p->next=new_student;  
            new_student->next=NULL;  
        }  
    }  
    return head_student;  
}  
  
struct book *Search_Book_ById(int id,struct book *head_book){  
    struct book *ptr_book = head_book;   
    int flag=0;    
    while(ptr_book!=NULL)    
    {  
        if(ptr_book->id==id){  
            printf("图书编号:%d\n",ptr_book->id);  
            printf("图书名称:%s\n",ptr_book->title);  
            printf("图书单价:%.2lf\n",ptr_book->price);  
            printf("图书作者:%s\n",ptr_book->author);  
            printf("存在状态:%s\n",ptr_book->state);  
            printf("借书人姓名:%s\n",ptr_book->student_name);   
            printf("学号:%d\n",ptr_book->student_id);  
            printf("\n");  
            flag++;  
        }  
        if(flag>0)  
        {  
            break;  
        }  
        ptr_book = ptr_book->next;  
    }    
    if(flag==0){    
            printf("暂无此图书信息!\n\n");    
    }    
    return head_book;   
};  
  
struct book *Search_Book_ByTitle(char *title,struct book *head_book){  
    struct book *ptr_book = head_book;   
    int flag=0;    
    while(ptr_book!=NULL)    
    {    
        if(strcmp(ptr_book->title,title)==0){    
            printf("图书编号:%d\n",ptr_book->id);    
            printf("图书名称:%s\n",ptr_book->title);    
            printf("图书单价:%.2lf\n",ptr_book->price);    
            printf("图书作者:%s\n",ptr_book->author);    
            printf("存在状态:%s\n",ptr_book->state);    
            printf("借书人姓名:%s\n",ptr_book->student_name);     
            printf("学号:%d\n",ptr_book->student_id);    
            printf("\n");    
            flag++;    
        }  
        if(flag>0)  
        {  
            break;  
        }  
        ptr_book = ptr_book->next;  
    }    
    if(flag==0){    
            printf("暂无此图书信息!\n\n");    
    }    
    return head_book;  
};  
  
struct book *Search_Book_ByPrice(double price_h,double price_l,struct book *head_book){  
    struct book *ptr_book = head_book;   
    int flag=0;    
    while(ptr_book!=NULL)    
    {    
        if(ptr_book->price>=price_l&&ptr_book->price<=price_h){    
            printf("图书编号:%d\n",ptr_book->id);    
            printf("图书名称:%s\n",ptr_book->title);    
            printf("图书单价:%.2lf\n",ptr_book->price);    
            printf("图书作者:%s\n",ptr_book->author);    
            printf("存在状态:%s\n",ptr_book->state);    
            printf("借书人姓名:%s\n",ptr_book->student_name);     
            printf("学号:%d\n",ptr_book->student_id);    
            printf("\n");    
            flag++;    
        }  
        ptr_book = ptr_book->next;  
    }    
    if(flag==0){    
            printf("暂无此图书信息!\n\n");    
    }    
    return head_book;  
}  
struct book* Delete_Book(int id,book* head_book){  
    bool flag=true;  
    struct book *p,*q;  
    p=q=head_book;  
  
    while(p->id!=id&&p->next!=NULL){  
        q=p;  
        p=p->next;  
    }  
    if(p->id==id){  
        if(p==head_book){  
            head_book=p->next;  
        }else{  
            q->next=p->next;  
        }  
  
        free(p);  
        printf("删除成功！\n");  
    }else{  
        flag=false;  
        printf("找不到该书");  
    }  
    return head_book;  
};  
  
struct student* Delete_Student(int id,student* head_student){  
    bool flag=true;  
    struct student *p,*q;  
    p=q=head_student;  
  
    while(p->id!=id&&p->next!=NULL){  
        q=p;  
        p=p->next;  
    }  
    if(p->id==id){  
        if(p==head_student){  
            head_student=p->next;  
        }else{  
            q->next=p->next;  
        }  
  
        free(p);  
        printf("删除成功！\n");  
    }else{  
        flag=false;  
        printf("找不到该学生");  
    }  
    return head_student;  
};  
  
struct student *Search_Student(int id,struct student *head_student){  
    struct student *ptr_student = head_student;   
    int flag=0;    
    while(ptr_student!=NULL)    
    {  
        if(ptr_student->id==id){  
            printf("学号:%d\n",ptr_student->id);  
            printf("姓名:%s\n",ptr_student->name);  
            printf("性别:%s\n",ptr_student->sex);  
            printf("借书:%s\n",ptr_student->borrow_book);   
            printf("\n");  
            flag++;  
        }  
        if(flag>0)  
        {  
            break;  
        }  
        ptr_student = ptr_student->next;  
    }    
    if(flag==0){    
            printf("暂无此学生信息!\n\n");    
    }    
    return head_student;   
};  
  
void Lent_Book(int id,int student_id,struct book *head_book,struct student *head_student){  
    struct book* p=head_book;  
    struct student* q=head_student;  
    if(p==NULL||q==NULL){  
        printf("书本或学生不存在\n");  
        return;  
    }  
    while(p!=NULL&&q!=NULL){  
        if(p->id!=id){  
            p=p->next;  
        }  
        if(q->id!=student_id){  
            q=q->next;  
        }  
        if(p->id==id&&q->id==student_id){  
            break;  
        }  
    }  
    if(p==NULL||q==NULL){  
        printf("书本或学生不存在\n");  
        return;  
    }else{  
        if(strcmp(p->state,"存在")!=0){  
            printf("书已借出!抱歉!");  
            return;  
        }else{  
            p->student_id=student_id;  
            strcpy(p->student_name,q->name);  
            strcpy(q->borrow_book,p->title);  
            strcpy(p->state,"已借出");  
            printf("已成功借出!/n");  
        }  
    }  
};  
  
void Back_Book(int id,int student_id,struct book *head_book,struct student *head_student){  
    struct book* p=head_book;  
    struct student* q=head_student;  
    if(p==NULL||q==NULL){  
        printf("书本或学生不存在\n");  
        return;  
    }  
    while(p!=NULL&&q!=NULL){  
        if(p->id!=id){  
            p=p->next;  
        }  
        if(q->id!=student_id){  
            q=q->next;  
        }  
        if(p->id==id&&q->id==student_id){  
            break;  
        }  
    }  
    if(p==NULL||q==NULL){  
        printf("书本或学生不存在\n");  
        return;  
    }else{  
        if(strcmp(p->state,"存在")==0){  
            printf("书未借出!抱歉!");  
            return;  
        }else{  
            p->student_id=-1;  
            strcpy(p->student_name,"待定");  
            strcpy(q->borrow_book,"无");  
            strcpy(p->state,"存在");  
            printf("已成功归还!/n");  
        }  
    }  
};  
  
void Print_Book(struct book *head_book){  
    struct book* p=head_book;  
  
    if(p==NULL){    
        printf("\n无记录\n\n");    
        return;    
    }    
    printf("\n图书编号\t图书名称\t图书单价\t图书作者\n\n");   
    while (p!=NULL)  
    {  
        printf("%d\t\t%s\t\t%.2lf\t\t%s\n\n",p->id,p->title,p->price,p->author);  
        p = p->next;  
    }  
}  
  
void Print_Student(struct student *head_student){  
    struct student* p=head_student;  
  
    if(p==NULL){    
        printf("\n无记录\n\n");    
        return;    
    }    
    printf("\n学生姓名\t学生性别\t学生学号\n\n");   
    while (p!=NULL)  
    {  
        printf("%s\t\t%s\t\t%d\n",p->name,p->sex,p->id);  
        p = p->next;  
    }  
}  

