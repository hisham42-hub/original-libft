/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 22:37:54 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/17 01:47:51 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *) big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		if (big[i] == little[i])
		{
			while ((big[i + j]) && (little[i]) && (big[i + j] == little[i]))
				j++;
			return ((char *) & big[i + j]);
		}
		i++;
	}
	return (NULL);
}
