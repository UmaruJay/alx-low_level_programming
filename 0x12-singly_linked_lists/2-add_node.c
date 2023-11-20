#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
=======
 * add_node - Adds a new node at the beginning of a list
 * @head: the original linked list
 * @str: the string to add to the new node
 *
 * Return: the address of the new list or NULL if it failed
 */
list_t *add _node(list_t **head, const char *str)
{
	list_t *temp:
	int length = 0;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
}
