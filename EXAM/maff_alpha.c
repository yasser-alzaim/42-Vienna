/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malzaim <malzaim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 23:20:29 by malzaim           #+#    #+#             */
/*   Updated: 2024/01/30 23:20:53 by malzaim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>
int main(void)
{
    char a;
    char b;

    a = 'a';
    b = 'B';

    while( a <= 'z' && b <= 'Z')
    {
        write(1, &a, 1);
        write(1, &b, 1);

        a += 2;
        b += 2;
    }
    return 0;

}