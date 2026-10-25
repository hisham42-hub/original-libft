/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 16:13:23 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/25 20:55:08 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	char			*p;

	x = (unsigned char) c;
	p = (char *) s;
	while (*p)
		p++;
	while (p >= s)
	{
		if (*p == x)
			return (p);
		if (p == s)
			break ;
		p--;
	}
	return (NULL);
}
