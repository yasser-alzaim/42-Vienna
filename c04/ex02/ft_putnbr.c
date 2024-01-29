/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:53:31 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/23 11:08:37 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar('0' + (nb % 10));
}
/*void test_ft_putnbr(int num) 
{
    ft_putnbr(num);
    printf("\n");
}

int main(void) {
    // Positive Numbers
    test_ft_putnbr(123);        // Expected: 123
    test_ft_putnbr(2147483647); // Expected: 2147483647
    test_ft_putnbr(1);          // Expected: 1

    // Negative Numbers
    test_ft_putnbr(-45);        // Expected: -45
    test_ft_putnbr(-2147483648);// Expected: -2147483648

    // Zero
    test_ft_putnbr(0);           // Expected: 0

    // Random Cases
    test_ft_putnbr(987654);      // Expected: 987654
    test_ft_putnbr(-123456);     // Expected: -123456

    // Boundary Cases
    test_ft_putnbr(9);           // Expected: 9
    test_ft_putnbr(10);          // Expected: 10
    test_ft_putnbr(99);          // Expected: 99
    test_ft_putnbr(100);         // Expected: 100

    return 0;
}*/
