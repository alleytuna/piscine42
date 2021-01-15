/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:37:00 by sdesseau          #+#    #+#             */
/*   Updated: 2020/02/23 20:25:31 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "ft.h"

int		comptlignes(int fd)
{
	int		count;
	char	buf[2];
	int		ret;

	count = 0;
	while ((ret = read(fd, buf, 1)))
	{
		if (buf[0] == '\n')
			count++;
	}
	return (count);
}

void	remplir(char **tab, int fd)
{
	int		i;
	int		count;
	char	buf[2];
	int		ret;

	i = 0;
	count = 0;
	while ((ret = read(fd, buf, 1)))
	{
		tab[count][i] = buf[0];
		tab[count][i + 1] = '\0';
		i++;
		if (buf[0] == '\n')
		{
			i = 0;
			count++;
		}
	}
	tab[count] = NULL;
}

void	malloctab(int fd, char **tab)
{
	int		i;
	int		compt;
	char	buf[2];
	int		rd;
	
	i = 0;
	compt = 0;
	while (rd = read(fd, buf, 1))
	{
		i++;
		if (buf[0] == '\n')
		{
			if (!(tab[count] = malloc(sizeof(char*) * (i + 1))))
				return ;
			i = 0;
			compt++;
		}
	}
	tab[compt] = NULL;
}

void		ft_convert(char *arg, char *dico)
{
	int fd;
	char **tab;

	if ((fd = open(dico, O_RDONLY)) == -1)
		return (NULL);
	if (!(tab) = malloc(sizeof(char*) * (comptlignes(fd) + 1)))
		return (NULL);
	if (close(fd) == -1)
		return (NULL);
	if ((fd = open(dico, O_RDONLY)) == -1)
		return (NULL);
	malloctab(fd, tab);
	if (close(fd) == -1)
		return (NULL);
	if ((fd = open(DICT_FILE, O_RDONLY)) == -1)
		return (tab);
	remplir(tab, fd);
}
