/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha_rev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <malzaim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:22:29 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/30 23:22:45 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>

int main()
{
    char z;
    char y;

    z = 'z';
    y = 'Y';

    while(z >= 'a' && y >= 'A')
    {
        write(1, &z, 1);
        write(1, &y, 1);

        z -= 2;
        y -= 2;
    }
    return 0;
}