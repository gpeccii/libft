/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gp <gp@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:47:20 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/20 12:37:03 by gp               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h""

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	j = dst_len;
	if (dstsize == 0)
		return (dst_len + ft_strlen(src));
	while (i < (dstsize - dst_len - 1))
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = 0;
	return (dst_len + ft_strlen(src));
}
