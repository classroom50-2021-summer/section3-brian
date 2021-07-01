/*
 * Fill in the TODO so that numbers are sorted with Bubble Sort.
 *
 * Pseudocode:
 *
 * Repeat n-1 times
 *   For j from 0 to n - 2
 *     If j'th and j + 1'th elements out of order
 *       Swap them
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    // TODO: Bubble Sort numbers

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}
