#include <stdlib.h>
<<<<<<< HEAD
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
=======
#include <stdio.h>
#include "lists.h"

/**
 * list_len - show the number of element of a list
 * @h: A linked list
 *
 * Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
}
