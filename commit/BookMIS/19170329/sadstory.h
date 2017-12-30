  #ifndef hehe
  #define hehe

  struct book
  {
	char name[50];
	char author[20];
	char isbn [13];
	double price;
	int num;
	struct book *next;
  };

  struct count
  {
	char author[20];
	int num;
	struct count *next;
  };
  
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>

  void add_book(struct book *);
  void del_str_line(char *);
  void borrow(struct book *);
  void name_search(struct book*, char *);
  void revise(struct book *);
  void book_count(struct book *);
  void price_count(struct book *);
  void author_max_count(struct count *);
  void author_count(struct count *);
  void author_search(struct book *, char *);
  void isbn_search(struct book *, char *);
  struct count * statistics(struct book *);
  struct book * create();
  void return_book(struct book *);
  void book_print(struct book *);
  struct book *book_delete(struct book *, char *);
  void return_file(struct book *);
  void menu();
  
  
  #endif
