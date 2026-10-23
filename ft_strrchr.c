/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 16:13:23 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/18 17:11:53 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	x;

	x = (char) c;
	src = (char *) s;
	while (*src)
	{
		if (*src == x)
			return (src);
		src++;
	}
	return (NULL);
}
