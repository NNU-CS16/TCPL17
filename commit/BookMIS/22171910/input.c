/*添加图书条目*/
void input(struct Node *head)
{
  struct Node *p, *ptr;
  FILE *fp;
  output(head);
  fp = fopen("bookinfo.txt", "a");
  if (fp == NULL)
  {
    printf("Can not open the file!\n");
    exit(1);
  }
  p = head;
  ptr = p;
  while (p -> != NULL)
  {
    p = p -> next;
    ptr = p;
  }
  p = (struct Node*)malloc(sizeof(struct Node));
  printf("请输入图书信息:书名 作者 ISBN 价格");
  scanf("%s%s%s%lf", p -> data.name, p -> data.writer,
		     p -> data.ISBN, p -> data.price);
  fprintf(fp, "%s", p -> data.name);
  fprintf(fp, "%s", p -> data.writer);
  fprintf(fp, "%s", p -> data.ISBN);
  fprintf(fp, "%lf", p -> data.price);
  ptr -> next = p;
  p -> next = NULL;
  ptr = ptr -> next;
  fclose(fp);
}  
