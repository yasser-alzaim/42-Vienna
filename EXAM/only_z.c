/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <malzaim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:33:44 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/30 23:33:53 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : only_z
Expected files   : only_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'z' character on the standard output.
*/

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return (0);
}
