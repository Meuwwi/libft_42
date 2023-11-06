/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:11:16 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/24 13:00:52 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

static char	*new_str(size_t n)
{
	char	*str;

	str = (char *)ft_calloc(sizeof(char), (n + 1));
	if (!str)
		return (NULL);
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*result;
	int		len;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	len += nbr_len(nbr);
	result = new_str(len);
	if (!result)
		return (NULL);
	while (len--)
	{
		result[len] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	if (n < 0)
		result[0] = 45;
	return (result);
}
