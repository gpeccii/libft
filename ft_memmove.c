/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gp <gp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:15:45 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/20 13:23:13 by gp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;
	size_t				i;

	i = 0;
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned const char *) src;
	if (dst < src)
	{
		while (i < len)
		{
			((char *) dst)[i] = ((const char *) src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	return ((void *) dst);
}
