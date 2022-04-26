#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a singly linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * Make sure there is no memory leaks.
 * The function sets the head to NULL.
 *
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
    listint_t *temp_variable;

    if (head == NULL)
        return; /* do not do anything */
    /* now assign value at head to trav */
    while (*head != NULL)
    {
        temp_variable =  *head;
        *head = ( *head)->next;
        free(temp_variable);
    }
    *head = NULL;
    /* make sure that value at head is null */
}
