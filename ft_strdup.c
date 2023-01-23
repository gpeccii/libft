/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:46:31 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/23 14:37:05 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp_s1;
	size_t	i;

	tmp_s1 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!tmp_s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tmp_s1[i] = s1[i];
		i++;
	}
	tmp_s1[i] = 0;
	return (tmp_s1);
}
