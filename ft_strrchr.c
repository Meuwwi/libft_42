/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:34:54 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/24 10:36:16 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*last;
	char			convert_c;

	convert_c = (char) c;
	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == convert_c)
			last = (char *) &s[i];
		i++;
	}
	if (s[i] == convert_c)
		last = (char *) &s[i];
	return (last);
}
