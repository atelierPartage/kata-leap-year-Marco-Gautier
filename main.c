/*
** EPITECH PROJECT, 2017
** dojo01
** File description:
** __DESCRIPTION__
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#undef EXIT_SUCCESS
#undef EXIT_FAILURE
const int EXIT_FAILURE = 0;
const int EXIT_SUCCESS = 1;

int is_leap_year(int year)
{
	if (year < 0)
		return 84;
	if ((year % 4) == 0)
			return EXIT_SUCCESS;
	else if ((year % 100) != 0)
		return EXIT_SUCCESS;
	else if ((year % 400) == 0)
		return EXIT_SUCCESS;
	return EXIT_FAILURE;
}
