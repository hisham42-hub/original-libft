/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 11:50:48 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/15 15:04:51 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	flen;
	size_t	x;

	x = ft_strlen(dst);
	flen = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (i < size)
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (flen);
}
