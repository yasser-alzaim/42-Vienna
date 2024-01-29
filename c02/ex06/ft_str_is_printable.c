/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:38:08 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/18 11:15:41 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str [i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main ()
{
		printf("%d", ft_str_is_printable("ASDLKKF???45454%"));
		printf("\n%d", ft_str_is_printable("\n\t"));
}*/
