#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("%d\n", head->data);
    printf("%p\n", head->link);

    struct node *current = malloc(sizeof(struct node));

    current->data = 100;
    current->link = NULL;
    head->link = current;

    printf("%d\n", current->data);
    printf("%p\n", head->link);

    current = malloc(sizeof(struct node));

    current->data = 200;
    current->link = NULL;

    head->link->link = current;

    printf("%d\n", current->data);
    printf("%p\n", current->link);

    printf("%p\n", current);
    printf("%p\n", head->link->link);

    return 0;
}
