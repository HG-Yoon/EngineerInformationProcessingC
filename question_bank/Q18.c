#include <stdio.h>
struct Node
{
    int value;
    struct Node *next;
};

void func(struct Node *node)
{
    while (node != NULL && node->next != NULL)
    {
        int t = node->value;
        node->value = node->next->value;
        node->next->value = t;
        node = node->next->next;
    }
}

int main()
{
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};
    n1.next = &n3;
    n3.next = &n2;
    struct Node *current = &n1;
    while (current != NULL)
    {
        printf("%d", current->value); // 132
        current = current->next;
    }
    return 0;
}
/*
n1 - n3 - n2
*/