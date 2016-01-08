/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:12:43 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/08 15:49:34 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		nbrlength(long long int lln)
{
	int		length;

	if (lln == 0)
		return (1);
	length = 0;
	while (lln > 0)
	{
		lln /= 10;
		length++;
	}
	return (length);
}

static char		getat(long long int lln, int idx)
{
	char				c;
	int					i;
	long long int		lft;

	i = 0;
	while (i < idx)
	{
		lln /= 10;
		i++;
	}
	lft = lln;
	lft /= 10;
	lft *= 10;
	lln = lln - lft;
	c = lln + '0';
	return (c);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				size;
	int				sign;
	int				i;
	long long int	lln;

	lln = (long long int)n;
	sign = 0;
	if (lln < 0)
	{
		lln *= -1;
		sign = 1;
	}
	size = nbrlength(lln);
	if (!(str = malloc(sizeof(char) * size + 1 + sign)))
		return (NULL);
	i = -1 + sign;
	if (sign)
		str[0] = '-';
	while (++i < size + sign)
		str[i] = getat(lln, (size - 1 + sign) - i);
	str[i] = '\0';
	return (str);
}
