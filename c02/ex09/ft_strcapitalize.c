/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:03:49 by aaltinto          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:38 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_low(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i ++;
	}
	return (str);
}
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;
	
	ft_low(str);
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (c == 0)
			{
				str[i] -= 32;
				c ++;
			}
			i ++;
		}
		else if (str[i] <= '9' && str[i] >= '0')
		{
			c = 1;
			i ++;
		}
		else
		{
			i ++;
			c = 0;
		}
	}
	return (str);
}
