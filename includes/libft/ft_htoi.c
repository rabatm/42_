/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martincelavie <martincelavie@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:40:14 by hchauvin          #+#    #+#             */
/*   Updated: 2023/11/14 16:40:04 by martincelav      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_htoi(char s[])
{
	int	i;
	int	c;
	int	n;

	i = 0;
	c = 0;
	n = 0;
	while ((c = s[i]) != '\0')
	{
		n *= 16;
		if (i == 0 && c == '0')
		{
			c = s[++i];
			if (c != 'x' && c != 'X')
				--i;
		}
		else if (c >= '0' && c <= '9')
			n += c - '0';
		else if (c >= 'a' && c <= 'f')
			n += 10 + (c - 'a');
		else if (c >= 'A' && c <= 'F')
			n += 10 + (c - 'A');
		else
			return (n);
		++i;
	}
	return (n);
}
