#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */

void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);

	_putchar('\n');

}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
