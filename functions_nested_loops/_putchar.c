#include <unistd.h>

/**
 *This function writes the character c to stadoutRe
 *Returns : on success 0
 */

int _putchar(char c)
{
  return (write(1,&c,1));
}
