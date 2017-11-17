#include<stdlib.h>
#include<stdio.h>
struct node     {       int number;
                        char symbol;
                        struct node * left;
                        struct node * right;
                        struct node * up;       };
struct node *maketree(char array[],int *curses);
void addnode(struct node** pointer,struct node** root,char sym,int num);
int lvof(char symbol);
int main()
{
char array[100];int curses;
struct node* root=(struct node*)malloc(sizeof(struct node));
scanf("%s",array);
       // while(array[curses]!=';');
return 0;
}



struct node *maketree(char array[],int *curses)
{
char sym;int num=0;
struct node* root=(struct node*)malloc(sizeof(struct node));
root={0,' ',NULL,NULL,NULL};
struct node* pointer=root;
        while(array[*curses]!=')'&&array[*curses]!=';')
        {
        sym=array[*curses];(*curses)++;
        if (array[*curses]=='('){
                                (*curses)++;
                                int leftnum=pointer->right->number;
                                pointer->right->symbol=sym;
                                pointer->right->right=maketree(array,curses);
                                pointer->right->number=leftnum;
                                continue;
                                }
                while('0'<=array[*curses]&&array[*curses]<='9')
                {num=num*10+array[*curses]-'0';(*curses)++;}
                addnode(&pointer,&root,sym,num);
        }
return root;
}

//.........................................................................

void addnode(struct node** pointer,struct node** root,char sym,int num)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->symbol=sym;temp->number=num;
while (lvof(sym)<lvof((*pointer)->symbol))
        *pointer=(*pointer)->up;
temp->left=(*pointer)->right;
temp->up=(*pointer);
(*pointer)->right=temp;
temp->left->up=temp;
}

//.........................................................................

int lvof(char symbol)
{
	switch (symbol)
	{
	case '+': return 1;case '-': return 1;
	case '*': return 2;case '/': return 2;
	case ' ': return 0;
}
}

//..........................................................................


