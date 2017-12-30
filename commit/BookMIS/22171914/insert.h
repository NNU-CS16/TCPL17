
struct book *insert(struct book *head,struct book *s)

{
  struct book *p,*p1,*p2;
  s=(struct book *)malloc(sizeof(struct book));
  p=(struct book *)malloc(sizeof(struct book));
  p2=(struct book *)malloc(sizeof(struct book));
  p1=(struct book *)malloc(sizeof(struct book));
  p2=head;
  p=s;
  if(head=NULL)
  {
    head=p;
    head->next=NULL;
  }
  else
  {
    while((p->ISBN>p2->ISBN)&&(p2->next!=NULL))
    {
      p1=p2;
      p2=p2->next;
    }
    if(p->ISBN<=p2->ISBN)
    {
      if(head==p2)  head=p;
      else p1->next=p;
      p1->next=p2;
    }

    else
    {
      p2->next=p;
      p->next=NULL;
    }
  }
  return head;
}




