/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:18:47 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/24 10:21:06 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*convert_s;
	unsigned char	convert_c;
	size_t			i;

	convert_s = (unsigned char *) s;
	convert_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (convert_s[i] == convert_c)
			return ((void *) &convert_s[i]);
		i++;
	}
	return (NULL);
}
