#ifndef BOOK_H
#define BOOK_H
struct book
{
    char title[51];
    char author[21];
    char ISBN[9];
    double price;
    struct book *next;
};
void search(struct book *head, char *target, int way);
void insert(struct book *head, char *add_ISBN, char *add_title, char *add_author, double price);
void update(struct book *head, char *update_ISBN, char *update_title, char *update_author, double update_price);
void delete(struct book *head, char *delete_ISBN);
void show(struct book *head);
void count(struct book *head);
void menu();
void write_file();
#endif
