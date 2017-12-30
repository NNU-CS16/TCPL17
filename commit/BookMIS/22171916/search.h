struct book *search(struct book* head,char ISBN[8])
{
  struct book *p;
  p=(struct book *)malloc(sizeof(struct book));

  int flag=0;
  for(p=head;p;p=p->next)
  {
    if(p->ISBN==ISBN)
    {
      printf("图书编号:%s\n",p->ISBN);
      printf("图书名称:%s\n",p->name);
      printf("作者名字:%s\n",p->writer);
      printf("图书价格:%.21f\n",p->price);
      printf("\n");
      flag++;
    }
  }
  if(flag=0)
  {
    printf("暂无此图书\n");
  }
  return head;
}
