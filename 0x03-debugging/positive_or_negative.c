#include "main.h"

/**
 * positive _or_negative - Determine if number is positive, negative or zero
 * @i: is the argument to be used
 * Return: always 0(Success)
 */
void positive_or_negative(int i)
{

        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }
        else
        {
                printf("%d is zero\n", i);
        }
}
