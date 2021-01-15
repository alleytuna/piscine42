/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:10:05 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/23 17:25:18 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
