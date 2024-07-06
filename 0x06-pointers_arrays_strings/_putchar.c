#include "unistd.h"
 /**
  * _putchar - writes the charater to stdout
  * @c: The character to be printed
  *
  * Return: on success 1
  * On error, return, and erno is set appropriately
  */
int _putchar(char c)
{ 
	return (write(1,&c,1));
}
