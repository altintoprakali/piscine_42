/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:13:34 by aaltinto          #+#    #+#             */
/*   Updated: 2023/03/29 11:26:14 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	y;
	int	o;
	int	b;

	y = '0';
	while (y <= '7')
	{
		o = y + 1;
		while (o <= '8')
		{
			b = o + 1;
			while (b <= '9')
			{
				write(1, &y, 1);
				write(1, &o, 1);
				write(1, &b, 1);
				b ++;
				if (y != '7')
					write(1, ", ", 2);
			}
		o ++;
		}
	y ++;
	}
}
