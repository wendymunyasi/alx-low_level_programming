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
	dlistint_t *temp;
	unsigned int i = 1;
	unsigned int count = 0;
	temp = *head;

	if (index < 1 || (index >= count + 1))
	{
		return (-1);
	}
	if (head == NULL)
	{
		return (-1);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		if (i == 1)
		{
			if (temp->next == NULL)
			{
				printf("Node deleted from list");
				free(temp);
				temp = *head = NULL;
			}
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
		}
		temp->next->prev = temp->prev;
		if (i != 1)
			temp->prev->next = temp->next;    /* Might not need this statement if i == 1 check */
		if (i == 1)
			*head = temp->next;
		printf("\n Node deleted");
		free(temp);
	}
	count--;
	return (-1);
}
