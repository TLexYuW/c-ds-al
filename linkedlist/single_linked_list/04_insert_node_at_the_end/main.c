#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    printf("%p\n", head);

    struct node *current = malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;
    printf("%p\n", head->link);

    current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;
    printf("%p\n", head->link->link);

    add_at_end(head, 40);

    printf("%d\n", head->link->link->link->data);
    printf("%p\n", head->link->link->link);

    return 0;
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}