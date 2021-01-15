/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:19:33 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/12 14:54:17 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_chars(char c, char d, char u)
{
	if (c < d && d < u)
	{
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(u);
		if (c != '7' || d != '8' || u != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = '0';
	u = '0';
	while (c <= '9')
	{
		u++;
		if (u > '9')
		{
			d++;
			u = '0';
			if (d > '9')
			{
				c++;
				d = '0';
			}
		}
		print_chars(c, d, u);
	}
}
