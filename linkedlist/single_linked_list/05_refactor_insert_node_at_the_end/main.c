#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add_at_end(struct node *ptr, int data);

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;
    printf("%p\n", head);

    struct node *ptr = head;
    ptr = add_at_end(ptr, 20);
    ptr = add_at_end(ptr, 30);
    ptr = add_at_end(ptr, 40);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        printf("%p\n", ptr->link);
        ptr = ptr->link;
    }

    return 0;
}

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;

    return temp;
}