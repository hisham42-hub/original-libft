/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/15 08:07:49 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/18 17:57:32 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forward(unsigned char *d, const unsigned char *sr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = sr[i];
		i++;
	}
}

static void	bakward(unsigned char *d, const unsigned char *sr, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		d[i] = sr[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*sr;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	sr = (const unsigned char *) src;
	d = (unsigned char *) dest;
	if (d < sr)
	{
		forward(d, sr, n);
	}
	if (d > sr)
	{
		bakward(d, sr, n);
	}
	return (dest);
}
