#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
    int value;
    struct s_list *next;
} t_list;

static t_list *create_node(int value)
{
    t_list *node = malloc(sizeof(*node));

    if (node == NULL)
        return NULL;
    node->value = value;
    node->next = NULL;
    return node;
}

static void push_front(t_list **head, int value)
{
    t_list *node = create_node(value);

    if (node == NULL)
        return;
    node->next = *head;
    *head = node;
}

static void print_list(t_list *head)
{
    while (head != NULL) {
        printf("%d\n", head->value);
        head = head->next;
    }
}

int main(void)
{
    t_list *head = NULL;

    push_front(&head, 42);
    print_list(head);
    return 0;
}
