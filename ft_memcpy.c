/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:50:50 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/23 23:41:34 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	i = 0;
	if (!(void *)dst && !(void *)src)
		return (NULL);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned const char *) src;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return ((void *) dst);
}
