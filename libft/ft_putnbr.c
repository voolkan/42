/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:19:33 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:19:35 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int n)
{
	long long int nn;

	nn = (long long int)n;
	if (nn < 0)
	{
		ft_putchar('-');
		nn = -nn;
	}
	if (nn >= 10)
		ft_putnbr(nn / 10);
	ft_putchar((nn % 10) + '0');
}
