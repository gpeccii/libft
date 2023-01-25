/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:40:51 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/25 01:54:57 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	str = malloc(size * count);
	if (!str)
		return (NULL);
	ft_bzero(str, size * count);
	return ((void *) str);
}
