#include "main.h"

/**
* main -  prints _putchar, followed by a new line
*
*Return: Always 0 (Success)
*/

int main(void)

{
char *sh = "Holberton";

while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');

return (0);
}
