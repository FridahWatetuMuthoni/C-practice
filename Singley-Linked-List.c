#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void travessing_node(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}

int main(void)
{
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 50;
    second->next = NULL;

    travessing_node(head);
}