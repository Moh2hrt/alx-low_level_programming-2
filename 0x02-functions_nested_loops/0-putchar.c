#include "main.h"
 
/**
 *main - Print the word putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	        char *sh = "_putchar";
	 
		        while sh != '\0'
		{
			        _putchar(*sh);
			        sh++;
		}
	_putchar('\n');
	return (0);
}
