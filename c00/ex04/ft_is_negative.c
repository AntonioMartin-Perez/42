/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:29:24 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 13:29:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void        ft_is_negative(int n)
{
    char c;
    if (n >= 0)
    {
        c = 'P';
    }
    else
    {
        c = 'N';
    }
        write(1,&c,1);
}

void 		main(void)
{
    ft_is_negative(-1);
}
