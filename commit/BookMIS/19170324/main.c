#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "book.h"
#include "book.c"

int main()
{

    int i = 0;
    struct book *pm[15];
    FILE *fp;
    char *line,*record;
    char buffer[1024];
    if ((fp = fopen("information.csv", "r")) == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    char delims[] = ",";
    char *result = NULL;
    int j = 0;
    while ((line = fgets(buffer, sizeof(buffer), fp)) != NULL)
    {
        pm[i] = (struct book *)malloc(sizeof(struct book));
        record = strtok(line, ",");
        while (record != NULL)
        {
            if (strcmp(record, "Ps:") == 0)
                return 0;
            if (j == 0)
                strcpy(pm[i]->title, record);
            if (j == 1)
                strcpy(pm[i]->author, record);
            if (j == 2)
                strcpy(pm[i]->ISBN, record);
            if (j == 3)
                pm[i]->price = atof(record);
            if (j == 4)
                break;
            record = strtok(NULL, ",");
            j++;
        }
        j = 0;
        i++;
    }
    fclose(fp);
    fp = NULL;

    pm[0]->next = pm[1];    pm[1]->next = pm[2];    pm[2]->next = pm[3];
    pm[3]->next = pm[4];    pm[4]->next = pm[5];    pm[5]->next = pm[6];
    pm[6]->next = pm[7];    pm[7]->next = pm[8];    pm[8]->next = pm[9];
    pm[9]->next = pm[10];   pm[10]->next = pm[11];  pm[11]->next = pm[12];
    pm[12]->next = pm[13];  pm[13]->next = pm[14];  pm[14]->next =  NULL;

    int way;
    char cmd, target[51], add_ISBN[9], add_title[51], add_author[21];
    char update_ISBN[9], update_title[51], update_author[21], delete_ISBN[9];
    double add_price, update_price;
    do
    {
        menu();
        cmd = getchar();
        getchar();
        if (cmd == 'q')
            break;
        switch (cmd)
        {
            case 'i':
                printf("please choose your way of inquiry:\n");
                printf("ISBN   inquiry(1)\ntitle  inquiry(2)\nauthor inquiry(3)\n");
                scanf("%d", &way);
                printf("Please enter the entry you want to query:\n");
                gets(target);
                search(pm[0], target, way);
                printf("The book information you have inquired is as follows:\n");
                break;
            case 'a':
                printf("Please enter the ISBN of the book you want to add:\n");
                gets(add_ISBN);
                printf("Please enter the title of the book you want to add:\n");
                gets(add_title);
                printf("Please enter the author of the book you want to add:\n");
                gets(add_author);
                printf("Please enter the price of the book you want to add:\n");
                scanf("%lf", &add_price);
                insert(pm[0], add_ISBN, add_title, add_author, add_price);
                printf("You have added success!\n");
                write_file(pm[0]);
                break;
            case 'u':
                printf("Please enter the ISBN of the book you want to update:\n");
                gets(update_ISBN);
                printf("Please enter the name of the book you want to update:\n");
                gets(update_title);
                printf("Please enter the author you want to update:\n");
                gets(update_author);
                printf("Please enter the price you want to update:\n");
                scanf("%lf", &update_price);
                update(pm[0], update_ISBN, update_title, update_author, update_price);
                write_file(pm[0]);
                break;
            case 'd':
                printf("Please enter the ISBN of the book you want to delete:\n");
                gets(delete_ISBN);
                delete(pm[0], delete_ISBN);
                write_file(pm[0]);
                printf("You have deleted success!\n");
                break;
            case 's':
                show(pm[0]);
                break;
            case 'c':
                count(pm[0]);
                break;
        }
    }while(1);

    return 0;
}
