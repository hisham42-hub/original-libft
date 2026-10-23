/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 11:13:14 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/18 23:02:28 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	trimend(char const *s, char const *set, size_t n)
{
	while ((s[n]) && (checkset(s[n], set)))
		n--;
	return (n);
}

static unsigned int	trimstart(char const *s, char const *set)
{
	unsigned int	i;

	i = 0;
	while ((s[i]) && (checkset(s[i], set)))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len;
	size_t	start;
	size_t	end;

	if ((!s1) || (!set))
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	start = trimstart(s1, set);
	len = ft_strlen(s1);
	if (start == len)
		return (ft_strdup(""));
	end = trimend(s1, set, len - 1);
	ptr = ft_substr(s1, start, end - start + 1);
	return (ptr);
}
