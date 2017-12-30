struct book *dq()
{
    struct book *head = (struct book*)malloc(sizeof(struct book));
    char str[50];
    char arr[20];
    char num[8];
    double j; 
    struct book* q = head;
    struct book* p = head;
    p -> next = NULL;
    FILE* r = fopen ("file.csv","r");
    if (r == NULL)
    {
        printf ("打开文件失败");
        exit (1);
    }
    while (fscanf (r,"%s %s %s %lf", str, arr, &num, &j) != EOF)
    {               
        q = (struct book*)malloc(sizeof(struct book));
        strcpy(q -> name, str);
        strcpy(q -> writer, arr);
        strcpy(q -> ISBN,num); 
        p -> price = j;
        p -> next = q;
        p = q;            
    }
    p -> next = NULL;
    fclose (r);
    return head -> next;
}
