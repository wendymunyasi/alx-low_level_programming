#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the head of linked list.
 *
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * Return: The address of the node where the loop starts, or NULL if,
 * there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow = slow->next;
	fast = fast->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
