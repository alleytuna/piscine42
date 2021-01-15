/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:01:23 by aaltun            #+#    #+#             */
/*   Updated: 2020/02/22 11:29:16 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a] && a < n - 1)
		a++;
	return (s1[a] - s2[a]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int c;

	a = ft_strlen(str);
	b = ft_strlen(to_find);
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (c < a)
	{
		if (ft_strncmp(&str[c], to_find, b) == 0)
			return (&str[c]);
		c++;
	}
	return (0);
}
