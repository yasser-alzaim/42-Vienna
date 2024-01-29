/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:15:57 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/21 12:22:54 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
		printf("%d", ft_strcmp("hello", "hello1"));
		printf("\n%d", ft_strcmp("he", "hello"));
		printf("\n%d", ft_strcmp("hello", "he"));
	    printf("\n%d", ft_strcmp("hello", "hello"));
}*/
