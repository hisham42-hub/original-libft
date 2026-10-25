/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 11:50:48 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/25 23:50:08 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	d;

	i = 0;
	d = 0;
	src_len = ft_strlen(src);
	while (dst[d] && (d < size))
		d++;
	if (size <= d)
		return (size + src_len);
	while ((src[i] != '\0') && (i + d < size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + src_len);
}
