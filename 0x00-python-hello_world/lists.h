#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_sym - singly linked list
 * @num: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_sym
{
	int num;
	struct listint_sym *next;
} listint_t;

size_t print_listint(const listint_t *ham);
listint_t *add_nodeint(listint_t **head, const int num);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
