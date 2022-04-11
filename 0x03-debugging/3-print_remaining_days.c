#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account.
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * You can assume that all test cases have valid months (i.e. the value,
 * of month will never be less than 1 or greater than 12) and valid,
 * days (i.e. the value of day will never be less than 1 or greater than 31).
 * You can assume that all test cases have valid month/day combinations,
 * (i.e. there will never be a June 31st or November 31st, etc.), but not,
 * all month/day/year combinations are valid (i.e. February 29, 1991 or,
 * February 29, 2427).
 *
 * Return: void.
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
		day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
		{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
	else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
