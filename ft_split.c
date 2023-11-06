/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:10:32 by mmorisse          #+#    #+#             */
/*   Updated: 2023/11/03 18:08:06 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_calculmot(char const *s, char c)
{
	int	cbs_mot;
	int	i;

	i = 0;
	cbs_mot = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cbs_mot++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cbs_mot);
}

static size_t	ft_len_mot(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_tab(int count, char **str_tab)
{
	int	i;

	i = 0;
	while (i < count)
	{
		i--;
		free(str_tab[i]);
	}
	free(str_tab);
	return (NULL);
}

static void	ft_declare_variable(size_t *i, int *j)
{
	*i = 0;
	*j = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**str_tab;
	size_t	i;
	int		j;

	if (!s)
		return (NULL);
	str_tab = ft_calloc((ft_calculmot(s, c) + 1), sizeof(char *));
	if (!str_tab)
		return (NULL);
	ft_declare_variable(&i, &j);
	while (i < ft_calculmot(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		str_tab[i] = ft_substr(s, j, ft_len_mot(&s[j], c));
		if (!str_tab[i])
			free_tab(i, str_tab);
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	return (str_tab);
}
