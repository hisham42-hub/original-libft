/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 19:18:29 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/21 16:41:05 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pw(int np, int c)
{
	int	i;
	int	power;

	i = 0;
	power = np;
	while (i < (c - 2))
	{
		power *= np;
		i++;
	}
	return (power);
}

static char	*to_ascii(char *a, int n, int dv, int negative)
{
	int	i;

	i = 0;
	if (negative)
	{
		*a = '-';
		a++;
	}
	while (n > 0)
	{
		a[i] = (n / dv) + '0';
		n = (n % dv);
		dv /= 10;
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		np;
	int		counter;
	int		sign;
	int		negative;

	np = n;
	sign = -1;
	counter = 0;
	negative = 0;
	if (n < 0)
	{
		n *= sign;
		negative = 1;
	}
	while (np > 0)
	{
		np = np / 10;
		counter++;
	}
	a = ft_calloc(counter, sizeof(char));
	if (!a)
		return (NULL);
	a = to_ascii(a, n, pw(10, counter), negative);
	return (a);
}
