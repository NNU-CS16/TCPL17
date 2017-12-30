  #ifndef _BOOK_H_
  #define _BOOK_H_
  #define STARS1 "********************************************************"
  #define STARS2 "********************"
 

  //定义链表
  typedef struct Book_Node
  {
      char title[50];
      char author[20];
      char ISBN[8];
      double price;
      struct Book_Node* next;
  }Book_Node;

  Book_Node* InsertBeforeHead(Book_Node* bookary, Book_Node* newp);

  //Search for book information according to title
  Book_Node* search_title(Book_Node* bookary, char* title);
  
  void search_author(Book_Node* bookary, char* author);
  
  Book_Node* search_ISBN(Book_Node* bookary, char* ISBN);

  void search_price(Book_Node* bookary, double price);

  //Insert book information
  Book_Node* insert(Book_Node* bookary, int *psize);

  //Update book information
  void update(Book_Node* bookary, char* ISBN);

  //Delete book information
  int delete(Book_Node* bookary, int* psize, char *ISBN);

  //Output book information
  void output(Book_Node* bookary, int size);

  void show(Book_Node* p);

  //Count book information
  int report(Book_Node* bookary, int size);

  //load book information
  Book_Node* loadArray(Book_Node* bookary, int size, char* filename);
  //save book information
  int saveAs(Book_Node* bookary, char* filename);

  int menu1();
  int menu2();
  int errCmd();

  #endif
