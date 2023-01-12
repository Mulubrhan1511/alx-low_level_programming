#include "lists.h"

/**
 *add_dnodeint - prints all the elements of a
 *dlistint_t list
 *@n: head of the list
 *Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s temp = malloc(sizeof(struct dlistint_s));
	temp -> prev = NULL:
	temp -> data = n;
	temp -> next = NULL;
	temp -> next = head;
	head -> prev = temp;
	head = temp;
	return head;	
}
