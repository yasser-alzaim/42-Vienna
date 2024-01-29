/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:42:28 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/17 16:34:42 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{

printf("%d", ft_str_is_lowercase("asdasdasdasdbhgdhf"));
printf("\n%d", ft_str_is_lowercase("DSSGFDFHDGHDFGSDFGD"));
printf("\n%d", ft_str_is_lowercase("asda3214235SDFSDFDSF"));
printf("\n%d", ft_str_is_lowercase(""));
}*/
