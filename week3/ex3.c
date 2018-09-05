#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

typedef Node* LN;

LN head = NULL;

void print_list(LN L)
{
    if (L == NULL)
    {
        printf("\n");
        return;
    }

    printf("%d ", L -> data);
    print_list(L -> next);
}

void insert_node(LN newNode)
{
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    LN tail = head;
    while (tail -> next != NULL)
        tail = tail -> next;
    tail -> next = newNode;
}

void delete_node(LN delNode)
{
    if (head -> data == delNode -> data)
    {
        head = head -> next;
        return;
    }

    LN pointer = head;
    LN bef = NULL;
    while (pointer != NULL && pointer -> data != delNode -> data)
    {
        bef = pointer;
        pointer = pointer -> next;
    }

    if (pointer == NULL)
        return;
    bef -> next = pointer -> next;
}

int main()
{
    Node newN1 = {1, NULL};
    Node newN2 = {2, NULL};
    Node newN3 = {3, NULL};
    Node newN7 = {7, NULL};
    Node newN8 = {8, NULL};

    insert_node(&newN1);
    insert_node(&newN8);
    insert_node(&newN7);
    insert_node(&newN2);
    insert_node(&newN3);
    print_list(head);

    delete_node(&newN2);
    print_list(head);

    delete_node(&newN1);
    print_list(head);

    delete_node(&newN3);
    print_list(head);
    return 0;
}
