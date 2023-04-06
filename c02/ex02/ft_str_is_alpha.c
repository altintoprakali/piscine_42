/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:11:31 by aaltinto          #+#    #+#             */
/*   Updated: 2023/04/05 17:33:46 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] <= 'Z' && str[i] >= 'A')
				|| (str[i] <= 'z' && str[i] >= 'a'))
			{
				i ++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}
