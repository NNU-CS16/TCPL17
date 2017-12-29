
struct book *delete(struct book *head,char ISBN[8])
{
  struct book *p1,*p2;
  p1=(struct book *)malloc(sizeof(struct book));
  p2=(struct book *)malloc(sizeof(struct book));
  while(head!=NULL&&head->ISBN==ISBN)
  {
    p2=head;
    head=head->next;
    free(p2);
  }
  if(head=NULL)
    return NULL;
  p1=head;
  p2=head->next;
  while(p2!=NULL)
  {
    if(p2->ISBN==ISBN)
    {
      p1->next=p2->next;
      free(p2);
    }
    else
      p1=p2;
    p2=p1->next;
  }
    return head;
}

