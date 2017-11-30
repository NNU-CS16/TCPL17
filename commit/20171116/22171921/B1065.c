#include <stdio.h>  
#include <stdlib.h>  
  
struct node   
{  
    int female;  
    int male;  
};    

int main()  
{  
    int N, M;  
    int i;  
    int tmp;  
    int guests[100000] = {0};  
    int total = 0;  
    int first = 1;   
    scanf("%d", &N);  
    struct node *pairs = (struct node *)malloc(N*sizeof(struct node));  
    for (i = 0; i < N; i++)  
        scanf("%d%d", &pairs[i].female, &pairs[i].male);    
    scanf("%d", &M);  
    for (i = 0; i < M; i++)  
    {  
        scanf("%d", &tmp);  
        guests[tmp] = 1;  
        total++;  
    }   
    for (i = 0; i < N; i++)  
    {  
        if (guests[pairs[i].female] == 1 && guests[pairs[i].male] == 1)  
        {  
            guests[pairs[i].female] = guests[pairs[i].male] = 2;  
            total -= 2;  
        }  
    }  
    printf("%d\n", total);    
    for (i = 0; i < 100000; i++)  
    {  
        if (guests[i] == 1)  
            printf("%s%05d", first++ == 1 ? "" : " ", i);  
    }
    printf("\n");   
    return 0;  
}  
