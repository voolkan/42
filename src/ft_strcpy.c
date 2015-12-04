/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:21:46 by scluzeau          #+#    #+#             */
/*   Updated: 2015/12/04 15:21:47 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char const *src)
{
	char *ptr;

	ptr = dst;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dst);
}
