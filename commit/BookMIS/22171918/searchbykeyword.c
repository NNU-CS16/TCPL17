#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "head.h"  
void searchbykeyword(struct Keywordchain *Keyworddic[][27]) 
{ 
	extern long int booknumber; 
	char rawkeyword[50];
	scanf("%s", rawkeyword);
	getchar(); 
	int keywordnumber = 0, pointer = 0, i, x, y; 
	for (i = 0; i < strlen(rawkeyword); i++)  
		if (rawkeyword[i] >= 'A' && rawkeyword[i] <= 'Z') 
			keywordnumber++; 
	char tempword[keywordnumber][50]; 
 	for (x = 0; x < keywordnumber; x++) 
 		for (int y = 0; y < 50; y++) 
			tempword[x][y] = '\0'; 
	for (i = 0; i < keywordnumber; i++) 
	{ 
 		int j = 1; 
 		tempword[i][0] = rawkeyword[pointer];
		pointer++; 
 		while (rawkeyword[pointer] != '\0' && rawkeyword[pointer] >= 'a' && rawkeyword[pointer] <= 'z') 
		{ 
			tempword[i][j] = rawkeyword[pointer]; 
 			j++;
			pointer++; 
		}		//tempword save one word once 
	} 
 	struct Keywordbookchain *tempchain = search(tempword[0], Keyworddic); 
	for (i = 1; i < keywordnumber; i++)	//make intersection between chains that contain keyword 
		tempchain = makeintersection(tempchain, search(tempword[i], Keyworddic), i);		 
	 	printf("///////////////////////////////////////////////////////////////\n"); 
	if (tempchain == NULL) 
 	{	 
		printf("No such keyword!\n");
		return; 
 	} 
	struct Keywordbookchain *shift = tempchain; 
 	while (tempchain != NULL)	 
	{ 
 		if (*(tempchain -> book -> title) != '\0')			 
			printonebook(tempchain -> book); 
 			tempchain = tempchain -> next; 
 	} 
 	printf("///////////////////////////////////////////////////////////////\n"); 
	printf("To delete all books shown, input 'd'. To go back, input 'b'\n"); 
 	char command; 
 	while (1) 
 	{ 
		scanf("%c", &command);	 
 		if (command == 'd') 
		{ 
 			while (shift != NULL) 
			{ 
				*(shift -> book -> title) = '\0'; 
 				shift = shift -> next; 
 				booknumber --; 
 			} 
 			return; 
		} 
		if (command == 'b')	
			return; 
		printf("Unknown command.\n");	 
	} 
	return; 
}  
struct Keywordbookchain *search(char keyword[], struct Keywordchain *Keyworddic[][27]) 
{ 
	char first = keyword[0], sec; 
	if (strlen(keyword) == 1) 
		sec = 26 + 'a'; 
    else    
		sec = keyword[1]; 
 	struct Keywordchain *temp = Keyworddic[first - 'A'][sec - 'a']; 
	while (temp != NULL && strcmp(temp -> keyword, keyword) != 0) 
		temp = temp -> next; 
 	if (temp == NULL) 
 		return NULL; 
	return temp -> thisbook; 
}  
struct Keywordbookchain *makeintersection(struct Keywordbookchain *Achain, struct Keywordbookchain *Bchain, int i) 
{ 
	struct Keywordbookchain *newchain = NULL, *A = Achain, *B = Bchain; 
	while (A != NULL) 
	{ 
		while (strcmp(B -> book -> ISBN, A -> book -> ISBN) >= 0 && B -> next != NULL) 
			B = B -> next; 
 		if (strcmp(B -> book -> ISBN, A -> book -> ISBN) == 0)			//got the intersected element 
 		{ 
			struct Keywordbookchain *temp = (struct Keywordbookchain *)malloc(sizeof(struct Keywordbookchain)); 
 			temp -> book = A -> book; 
 			temp -> next = newchain; 
			newchain = temp; 
 		} 
 		A = A -> next; 
 	} 
 	if (i != 1)		//clean the useless Achain 
	{ 
 		while (Achain != NULL) 
 		{ 
 			Bchain = Achain; 
			Achain = Achain -> next; 
	 		free(Bchain); 
		} 
	} 
	return newchain; 
} 
