/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:21:27 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/24 10:26:20 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*convert1;
	unsigned char	*convert2;
	size_t			i;

	i = 0;
	convert1 = (unsigned char *) s1;
	convert2 = (unsigned char *) s2;
	while (i < n)
	{
		if ((unsigned char) convert1[i] != (unsigned char) convert2[i])
			return ((unsigned char) convert1[i] - (unsigned char) convert2[i]);
		i++;
	}
	return (0);
}
