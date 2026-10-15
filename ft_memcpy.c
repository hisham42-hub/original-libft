/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 05:56:08 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/15 15:06:49 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*sr;
	size_t				i;

	d = (unsigned char *) dest;
	sr = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = sr[i];
		i++;
	}
	return (dest);
}
