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
} listint_tile;

size_t print_listint(const listint_tile *ham);
listint_t *add_nodeint(listint_tile **head, const int num);
void free_listint(listint_tile *head);
int check_cycle(listint_tile *list);

#endif /* LISTS_H */
