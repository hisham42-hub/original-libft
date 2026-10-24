/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 11:50:48 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/24 13:22:26 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = 0;
	if (size == 0)
		return (size + ft_strlen(src));
	while (dst[d] && (d < size))
		d++;
	if (size == d)
		return (size + ft_strlen(src));
	while ((src[i] != '\0') && (i + d < size - 1))
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (d + ft_strlen(&src[i]));
}
