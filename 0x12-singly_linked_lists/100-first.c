<<<<<<< HEAD
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
=======
void first(void) _attribute_ ((constructor));

/**
 * frist - prints a sentence before the main
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
 * function is executed
 */
void first(void)
{
<<<<<<< HEAD
printf("You're beat! and yet, you must allow,\n");
=======
printf("you're beat! and yet. you must allow.\n")
>>>>>>> fce83b7e0eb3868bf5b74fb0b116d6e48043ad43
printf("I bore my house upon my back!\n");
}
