/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:40:59 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/23 13:14:24 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	i = 0;
	temp_s1 = (unsigned char *) s1;
	temp_s2 = (unsigned char *) s2;
	while (i < n)
	{
		if (*(temp_s1 + i) != *(temp_s2 + i))
			return (*(temp_s1 + i) - *(temp_s2 + i));
		i++;
	}
	return (0);
}
