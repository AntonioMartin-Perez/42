/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:47:08 by ccarrera          #+#    #+#             */
/*   Updated: 2020/11/29 10:08:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void	rush(int x, int y)
{
	int px;
	int py;

	px = 1;
	py = 1;
	while (py <= y)
	{
		while (px <= x)
		{
			if (px == 1 || py == 1 || px == x || py == y)

				if ( ( px == 1 && (py == 1 || py == y) ) || (px == x && (py == 1 || py == y)) )
					ft_putchar('o');
				else if ( py == 1 || py == y )
					ft_putchar('-');
				else
					ft_putchar('|');
					
			else
				ft_putchar(' ');
			px++;
		}

		ft_putchar('\n');
		px = 1;
		py++;
	}
}
