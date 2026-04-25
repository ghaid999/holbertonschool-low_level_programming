#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to head
 * @idx: index
 * @n: value
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
