/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:07:56 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/17 16:19:31 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str [i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
printf("%d", ft_str_is_numeric("1214389472938"));
printf("\n%d", ft_str_is_numeric("12438h9472938"));
printf("\n%d", ft_str_is_numeric("14389fshdsf38"));
printf("\n%d", ft_str_is_numeric(""));

}*/
