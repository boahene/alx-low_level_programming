#include <stdio.h>
#include "main.h"

/**
 * print_remainig_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * Description: prints the date 
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++
		}

		printf("Day of the year: %d\n", day);
		printf("Remainig days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			print("Invalid date: %02d/%02d/%04d\n", month, day - 30, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remainig days: %d\n", 365 - day);
		}
	}
}