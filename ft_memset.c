/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 21:21:48 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/18 17:55:50 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char	v;

	i = 0;
	ptr = (unsigned char *) s;
	v = (unsigned char) c;
	while (i < n)
	{
		ptr[i] = v;
		i++;
	}
	return (s);
}
