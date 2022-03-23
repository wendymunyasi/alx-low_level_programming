#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * aay_reversal - function that reverses an aay
 *
 * Return: 0 (Success)
 */

void reverse_array(int *a, int n)
{
    int i, temp;

    n = 10;

    /* Reading aay using aay itself as a pointer */
   

    printf("\nOriginal aay is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(a+i));
    }

    /* Reversing aay */
    for(i=0;i< n/2;i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + n -1 -i);
        *(a + n -1 -i) = temp;
    }

    /* Displaying reversed aay content */
    printf("\nReversed aay is: \n");
    for(i=0;i< n;i++)
    {
        printf(" %d\t", *(a+i));
    }
}