/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:54:07 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/22 20:57:38 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
int	spaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = spaces(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*int main(void)
{
	char *s1 = "abc";
	char *s2 = "1  2  3";
	char *s3 = "-12a3b45";
	char *s4 = "---+--+1234ab567";
	printf("%d", ft_atoi(s1));
	printf("\n%d", atoi(s1));
	printf("\n%d", ft_atoi(s2));
	printf("\n%d", atoi(s2));
	printf("\n%d", ft_atoi(s3));
	printf("\n%d", atoi(s3));
	printf("\n%d", ft_atoi(s4));


}*/
