/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 22:37:54 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/26 00:24:20 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_big(char const *big, char const *little, size_t max)
{
	int		flag;
	size_t	j;

	j = 0;
	flag = 1;
	while ((*big) && (little[j]) && flag && (j < max))
	{
		if (*big != little[j])
			flag = 0;
		j++;
		big++;
	}
	if(little[j] == '\0')
		return (flag);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || little[0] == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			if (check_big(&big[i], little, (len - i)))
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
