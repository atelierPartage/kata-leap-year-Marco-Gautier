/*
** EPITECH PROJECT, 2017
** dojo01
** File description:
** __DESCRIPTION__
*/
#include <criterion/criterion.h>

int is_leap_year(int year);

Test(test_is_leap, test_2012)
{
	cr_assert_eq(is_leap_year(2012), EXIT_SUCCESS);
}

Test(test_is_leap, test_2013)
{
	cr_assert_eq(is_leap_year(2013), EXIT_FAILURE);

}

Test(test_is_leap, test_0)
{
	cr_assert_eq(is_leap_year(0), EXIT_SUCCESS);
}

Test(test_is_leap, test_100)
{
	cr_assert_eq(is_leap_year(100), EXIT_SUCCESS);
}

Test(test_is_leap, test_negative)
{
	cr_assert_eq(is_leap_year(-42), 84);
}
