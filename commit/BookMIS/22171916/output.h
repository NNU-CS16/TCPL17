void output(struct book *head)
{ 
    struct book *p;
    p=(struct book *)malloc(sizeof(struct book));
    if(head==NULL)
    {
        printf("无记录\n");
        return;
    }
    printf("/n图书编号/t图书名称/t图书单价/t图书作者/n\n");
    for(p=head;p;p=p->next)
        printf("%s/t/t%s/t/t%.2lf/t/t%s/n\n",p->ISBN,p->name,p->price,p->writer);
} 
