#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "head.h"
void printallbook(struct Book *bookhead) 
{ 
	while (bookhead != NULL) 
	{ 
 		if (*(bookhead -> title) != '\0') 
 		printf("%s  %s  %s\n", bookhead -> title, bookhead -> author, bookhead -> ISBN); 
	 	bookhead = bookhead -> next; 
 	} 
} 
void printonebook(struct Book *bookhead) 
{ 
 	if (bookhead == NULL) 
		return; 
 	if (*(bookhead -> title) != '\0') 
 		printf("%s %s %s\n", bookhead -> title, bookhead -> author, bookhead -> ISBN); 
} 

