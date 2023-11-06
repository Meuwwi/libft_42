/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:58:47 by mmorisse          #+#    #+#             */
/*   Updated: 2023/10/20 12:13:51 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*tmp_b;

	if (!b)
		return (NULL);
	tmp_b = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (tmp_b);
}
