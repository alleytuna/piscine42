/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:25:25 by sdesseau          #+#    #+#             */
/*   Updated: 2020/02/23 20:23:57 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		ft_checkarg(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_checkarg(argv[2]) == 1)
			ft_convert(argv[2], "numbers.dict");
	}
	else if (argc == 3)
	{
		if(ft_checkarg(argv[3] == 1))
			ft_convert(argv[3], argv[2])
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
