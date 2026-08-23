#include <stdlib.h>

typedef struct s_list {
    int value;
    struct s_list *next;
} t_list;

static void push_back(t_list **head, int value)
{
    /* TODO: ajouter un noeud en fin de liste. */
    (void)head;
    (void)value;
}

static int list_size(t_list *head)
{
    (void)head;
    /* TODO: compter les noeuds. */
    return 0;
}

static void free_list(t_list **head)
{
    /* TODO: liberer chaque noeud puis mettre head a NULL. */
    (void)head;
}

int main(void)
{
    t_list *head = NULL;

    push_back(&head, 1);
    (void)list_size(head);
    free_list(&head);
    return 0;
}
