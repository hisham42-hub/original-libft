/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 13:05:37 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/21 14:29:57 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*src;
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	src = (char *) s;
	ptr = ft_calloc((ft_strlen(src)), sizeof(char));
	if (!ptr)
		return (NULL);
	while (src[i])
	{
		ptr[i] = f(i, src[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
