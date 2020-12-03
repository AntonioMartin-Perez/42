/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarrera <ccarrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:47:08 by ccarrera          #+#    #+#             */
/*   Updated: 2020/11/28 20:05:27 by ccarrera         ###   ########.fr       */
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
				if (px == 1 && (py == 1 || py == y))
					ft_putchar('A');
				else if (px == x && (py == 1 || py == y))
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				ft_putchar(' ');
			px++;
		}

		ft_putchar('\n');
		px = 1;
		py++;
	}
}
