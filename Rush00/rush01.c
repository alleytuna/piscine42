/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdupont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:56:59 by gdupont           #+#    #+#             */
/*   Updated: 2020/02/09 21:42:43 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line01(int width)
{
	width = width - 2;
	ft_putchar('/');
	while (width >= 1)
	{
		ft_putchar('*');
		width--;
	}
	if (width != -1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	middle_line01(int width, int height)
{
	int width_bis;

	width_bis = width - 2;
	while (height >= 3)
	{
		ft_putchar('*');
		while (width_bis >= 1)
		{
			ft_putchar(' ');
			width_bis--;
		}
		if (width > 1)
			ft_putchar('*');
		ft_putchar('\n');
		height--;
		width_bis = width - 2;
	}
}

void	last_line01(int width)
{
	width = width - 2;
	ft_putchar('\\');
	while (width >= 1)
	{
		ft_putchar('*');
		width--;
	}
	if (width != -1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush01(int width, int height)
{
	if (width > 2147483647 || height > 2147483647)
        return;
	if (width > 0 && height > 0)
		first_line01(width);
	if (height >= 3)
		middle_line01(width, height);
	if (height >= 2)
		last_line01(width);
}
