/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: hsalahal <hsalahal@student.42abudhabi.ae> #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 09:32:31 by hsalahal         #+#    #+#              */
/*   Updated: 2026/10/17 12:15:02 by hsalahal        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		result;
	char	*ptr;

	sign = 1;
	result = 0;
	ptr = (char *) nptr;
	while (((*ptr >= 9) && (*ptr <= 13)) || (*ptr == 32))
		ptr++;
	if (*ptr == '-')
	{
		sign = -1;
		ptr++;
	}
	else if (*ptr == '+')
		ptr++;
	while (*ptr >= '0' && *ptr <= '9')
	{
		result = (result * 10) + (*ptr - 48);
		ptr++;
	}
	return (result * sign);
}
