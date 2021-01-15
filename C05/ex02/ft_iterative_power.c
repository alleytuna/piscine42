/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:01:48 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/23 17:08:28 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
