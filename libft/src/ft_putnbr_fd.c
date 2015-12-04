/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:19:54 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:19:55 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long int nn;

	nn = (long long int)n;
	if (nn < 0)
	{
		ft_putchar_fd('-', fd);
		nn = -nn;
	}
	if (nn >= 10)
		ft_putnbr_fd(nn / 10, fd);
	ft_putchar_fd((nn % 10) + '0', fd);
}
