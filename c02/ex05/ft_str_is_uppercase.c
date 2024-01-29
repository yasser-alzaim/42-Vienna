/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:02:24 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/17 16:58:54 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{
		printf("%d", ft_str_is_uppercase("ASDLKKFSLDKASDFAS"));
		printf("\n%d", ft_str_is_uppercase("asdasdasdghhjlkjik"));
		printf("\n%d", ft_str_is_uppercase("AASDAS123123sadfas"));
		printf("\n%d", ft_str_is_uppercase(""));
}*/
