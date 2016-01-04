/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:12:43 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/04 16:15:31 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		nbrlength(int n)
{
	int		length;

	if (n == 0)
		return (1);
	length = 0;
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char		getat(int n, int idx)
{
	char	c;
	int		i;
	int		lft;

	i = 0;
	while (i < idx)
	{
		n /= 10;
		i++;
	}
	lft = n;
	lft /= 10;
	lft *= 10;
	n = n - lft;
	c = n + '0';
	return (c);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;
	int		i;

	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	size = nbrlength(n);
	str = malloc(sizeof(char) * size + 1 + sign);
	if (str == NULL)
		return (NULL);
	i = 0 + sign;
	if (sign)
		str[0] = '-';
	while (i < size + sign)
	{
		str[i] = getat(n, (size - 1 + sign) - i);
		i++;
	}
	str[i] = '\0';
	return (str);
}