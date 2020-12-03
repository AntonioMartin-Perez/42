/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:50:20 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 10:50:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// void		ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void        ft_print_alphabet(void)
{
	char c;
    for (c = 'a'; c <= 'z'; ++c)
        // ft_putchar(c);
        write(1,&c,1);
    // return void;
}


// void 		main(void)
// {
// 	ft_print_alphabet();
// }

int 		main(void)
{
    ft_print_alphabet();
}