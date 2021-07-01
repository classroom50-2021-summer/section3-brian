/*
 * Fill in the TODO so that numbers are sorted with Selection Sort.
 *
 * Pseudocode:
 *
 * For i from 0 to n-1
 *   Find smallest item between i'th item and last item
 *   Swap smallest item with i'th item
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

    // TODO: Selection Sort numbers

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}
