#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a,
 * linked list.
 * @head: pointer to pointer to the h of linked list.
 * @index: ndex of the node that should be deleted. Index starts at 0.
 *
 * Return: if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int count;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	count = 0;

	while (head1 != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		count++;
	}
	return (-1);
}
