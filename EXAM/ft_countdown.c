/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <malzaim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:06:16 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/30 23:08:11 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>*/

#include <unistd.h>

int		main(void)
{
	char digit;

	digit = '9';
	while (digit >= '0')
	{
		write(1, &digit, 1);
		digit--;
	}
	write(1, "\n", 1);
	return (0);
}
