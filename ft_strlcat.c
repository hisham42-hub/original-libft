/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 11:50:48 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/19 21:13:36 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	flen;

	j = ft_strlen(dst);
	flen = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	if (size <= j)
		return (i + ft_strlen(src));
	while ((src[i] != '\0') && (i + j < size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (flen);
}
