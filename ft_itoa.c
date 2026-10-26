/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 19:18:29 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/26 16:40:07 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long np)
{
	int	i;

	i = 0;
	if (np <= 0)
		i++;
	while (np != 0)
	{
		np /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		counter;
	long	np;

	np = (long) n;
	counter = count_len(np);
	a = malloc((counter + 1) * sizeof(char));
	if (!a)
		return (NULL);
	a[counter] = '\0';
	if (np == 0)
		a[0] = '0';
	if (np < 0)
	{
		a[0] = '-';
		np = -np;
	}
	while (np != 0)
	{
		a[counter - 1] = (np % 10) + '0';
		np /= 10;
		counter--;
	}
	return (a);
}
