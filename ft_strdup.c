/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 14:50:46 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/18 17:55:02 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while ((i < size) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*dub;
	size_t	len;

	ptr = (char *) s;
	len = ft_strlen(s);
	dub = ft_calloc(len + 1, sizeof(char));
	if (!dub)
		return (NULL);
	dub = ft_strcpy(dub, ptr, len);
	return (dub);
}
