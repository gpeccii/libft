/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:03:29 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/21 17:41:56 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_counter(const char *s, char c)
{
	size_t	i;
	size_t	count;

	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		if (s[i] == c && s[i + 1] == '\0')
			break;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	matrix = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c)
			{
				++s;
				++j;
			}
			matrix[i++] = ft_substr(s - j, 0, j);
		}
		else
			++s;
	}
	matrix[i] = 0;
	return (matrix);
}
