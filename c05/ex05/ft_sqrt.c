/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <malzaim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:51:45 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/29 15:59:18 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	long	candidate;
	long	num;

	num = nb;
	if (num <= 0)
	{
		return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	candidate = 2;
	if (num >= 2)
	{
		while (candidate * candidate <= num)
		{
			if (candidate * candidate == num)
			{
				return (candidate);
			}
			candidate++;
		}
	}
	return (0);
}
/*int	main(void)
{
	int	test_cases[] = {16, 25, 36, 81, 100, -1, 0, 1, 7};
	int	num_tests;
	int	result;

	// Test cases
	num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
	for (int i = 0; i < num_tests; i++)
	{
		result = ft_sqrt(test_cases[i]);
		if (result != 0)
		{
			printf("Square root of %d is: %d\n", test_cases[i], result);
		}
		else
		{
			printf("No real square root for %d\n", test_cases[i]);
		}
	}
	return (0);
}*/
