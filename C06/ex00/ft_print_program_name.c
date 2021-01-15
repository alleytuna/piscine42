/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:22:30 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/26 12:46:06 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;

	(void)argc;
	a = 0;
	while (argv[0][a] != '\0')
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
	return (0);
}
