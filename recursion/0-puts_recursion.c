#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print the string
 * @s : the string to print
 * Return: the string folliwd by a new line.
 */


void _puts_recursion(char *s){

if (s == '\0')
  return ('\n');

  return _putchar (s) + void _puts_recursion(s + 1);

}
