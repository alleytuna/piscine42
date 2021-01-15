/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:25:09 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/26 13:47:58 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

int		main(int argc, char **argv)
{
	int		a;
	char	*swap;

	a = 1;
	while (a < argc - 1)
	{
		if ((ft_strcmp(argv[a], argv[a + 1])) > 0)
		{
			swap = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = swap;
			a = 0;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
