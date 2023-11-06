/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:26:42 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/24 10:28:55 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			convert_c;

	convert_c = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == convert_c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == convert_c)
		return ((char *) &s[i]);
	return (NULL);
}
