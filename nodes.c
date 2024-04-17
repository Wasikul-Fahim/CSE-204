#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
} typedef Node;

// Insert at the beginning
void insertAtBeginning(struct Node **head_ref, int new_data)
{
    // Allocate memory to a node
    Node *new_node = malloc(sizeof(Node));

    // insert the data
    new_node->value = new_data;

    new_node->next = (*head_ref);

    // Move head to new node
    (*head_ref) = new_node;
}

void printLinkedlist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }
    printf("\n");
}

int main(void)
{
    /* Initialize nodes */
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    one = malloc(sizeof(Node));
    two = malloc(sizeof(Node));
    three = malloc(sizeof(Node));
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value
    head = one;

    Node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->value = 4;

    Node *temp = head;

    for (int i = 2; i < 5; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;

    printLinkedlist(head);
}