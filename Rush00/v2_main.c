/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes <asimoes@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:35:18 by asimoes           #+#    #+#             */
/*   Updated: 2020/02/09 19:06:55 by asimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		rush00(int width, int height);
void		rush01(int width, int height);
void		rush02(int width, int height);
void		rush03(int width, int height);
void		rush04(int width, int height);

int			ft_atoi(char *str)
{
	int		number;
	int		is_neg;

	number = 0;
	is_neg = 1;
	while (*str < 32 || *str == 127)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	return (number * is_neg);
}

void		call_rush(int num, int x, int y)
{
	if (num == 0)
		rush00(x, y);
	else if (num == 1)
		rush01(x, y);
	else if (num == 2)
		rush02(x, y);
	else if (num == 3)
		rush03(x, y);
	else if (num == 4)
		rush04(x, y);
	else
		write(1, "Please choose a rush number between 0 and 4\n", 44);
}

int			main(int argc, char *argv[])
{
	int		x;
	int		y;
	int		rush_num;

	if (argc < 2 || argc > 4)
	{
		write(1, "Usage: ./rush x y [rush num]\n", 29);
		return (0);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (argc == 4)
	{
		rush_num = ft_atoi(argv[3]);
		call_rush(rush_num, x, y);
		return (0);
	}
	rush02(x, y);
	return (0);
}
