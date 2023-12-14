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

    struct node *current2 = malloc(sizeof(struct node));

    current2->data = 200;
    current2->link = NULL;
    current->link = current2;

    printf("%d\n", current2->data);
    printf("%p\n", current->link);

    printf("%p\n", head->link->link);

    return 0;
}
