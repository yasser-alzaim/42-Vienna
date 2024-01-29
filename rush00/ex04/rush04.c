/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:21:10 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/14 11:00:50 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error_message(void);

void	print_row(int x, char left, char middle, char right)
{
	if (x >= 1)
	{
		ft_putchar(left);
		while (--x >= 2)
			ft_putchar(middle);
		if (x == 1)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_column(int x, int y, char wall)
{
	int	i;

	while (y-- > 2)
	{
		if (x > 1)
			ft_putchar(wall);
		i = x - 2;
		while (i-- > 0)
			ft_putchar(' ');
		ft_putchar(wall);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
		error_message();
	else if (y >= 1)
	{
		print_row(x, 'A', 'B', 'C');
		print_column(x, y, 'B');
		if (y >= 2)
			print_row(x, 'C', 'B', 'A');
	}
}
