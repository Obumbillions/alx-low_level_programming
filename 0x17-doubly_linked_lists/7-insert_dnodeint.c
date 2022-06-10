#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to head of the list.
 * @idx: Index to insert.
 * @n: New data.
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *prv_posit = *h;

	/*Add at the start position*/
	if (!idx)
		return (add_dnodeint(h, n));

	/*Find prev position*/
	for (; idx > 1; idx--)
	{
		prv_posit = prv_posit->next;
		if (!prv_posit)
			return (NULL);
	}

	/*Add in the last position*/
	if (!(prv_posit->next))
		return (add_dnodeint_end(h, n));

	/*Add in middle position*/
	/*Create new node*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = prv_posit;
	new->next = prv_posit->next;
	prv_posit->next->prev = new;
	prv_posit->next = new;
	return (new);
}
