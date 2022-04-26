#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index,
 * index of a listint_t linked list.
 * @head: pointer to pointer to the head of linked list.
 * @index:index of the node that should be deleted. Index starts at 0.
 *
 * Return:  1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_variable, *temp_variable2;
	unsigned int i = 0;
	/* if there is no list then return NULL */
	if (head == NULL || *head == NULL)
		return (-1);
	/* check for index 0 */
	if (index == 0)
	{
		temp_variable = *head;
		*head = (*head)->next;
		free(temp_variable);
		return (1);
	}
	/* assign the temporary variable as the first node */
	temp_variable = *head;
	/* traverse the list till the index */
	while (i != index - 1 && temp_variable->next != NULL)
	{
		temp_variable = temp_variable->next;
		i++;
	}
	if (i == index - 1 && temp_variable->next != NULL)
	{
		temp_variable2 = temp_variable->next;
		temp_variable->next = temp_variable2->next;
		free(temp_variable2);
		return (1);
	} /* by here the code has failed so we return -1 */
	return (-1);
}
