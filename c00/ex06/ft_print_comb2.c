/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:30:40 by aaltinto          #+#    #+#             */
/*   Updated: 2023/03/29 19:38:35 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	last;

	first = 0;
	while (first <= 98)
	{
		last = first + 1;
		while (last <= 99)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(last / 10 + '0');
			ft_putchar(last % 10 + '0');
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		last ++;
		}
		first ++;
	}
}
