<<<<<<< HEAD
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
=======
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elementof a list_t list.
 * @h: the list_t list
 *
 * Return: the number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		if
			(h->str == NULL);
			printf("[0] (ni1)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next :
	}
	return (nodes);
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
}
