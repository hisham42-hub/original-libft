/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 14:25:29 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/20 15:08:51 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		flag;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i])
	{
		if (!(s[i] == c) && !flag)
		{
			j++;
			flag = 1;
		}
		else if ((s[i] == c) && (flag))
			flag = 0;
		i++;
	}
	return (j);
}

static size_t	countwordslen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while ((s[i]) && !(s[i] == c))
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst)
	{
		free(dst);
		return (NULL);
	}
	while ((src[i] != '\0') && (i < n))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**creatarr(char **sptr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wlen;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			wlen = countwordslen(&s[i], c);
			sptr[j] = malloc((wlen + 1) * sizeof(char));
			ft_strcpy(sptr[j], &s[i], wlen);
			j++;
			i += wlen;
		}
	}
	sptr[j] = NULL;
	return (sptr);
}

char	**ft_split(char const *s, char c)
{
	char	**sptr;
	size_t	arrsize;

	if (!s || *s == '\0')
	{
		sptr = ft_calloc(1, sizeof(char *));
		if (!sptr)
			return (NULL);
		sptr[0] = NULL;
		return (sptr);
	}
	arrsize = countwords(s, c) + 1;
	sptr = malloc((arrsize) * (sizeof(char *)));
	if (!sptr)
		return (NULL);
	sptr = creatarr(sptr, s, c);
	return (sptr);
}
