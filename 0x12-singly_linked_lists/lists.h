<<<<<<< HEAD
#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
=======
#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linkrd list
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
<<<<<<< HEAD
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
=======
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_s;
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
<<<<<<< HEAD
void free_list(list_t *head);

#endif
=======
void free_list(listT *head);

#endif /*LINKED*/
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
