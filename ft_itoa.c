/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecci <gpecci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:20:04 by gpecci            #+#    #+#             */
/*   Updated: 2023/01/23 18:42:45 by gpecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenght(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb && count++)
		nb = nb / 10;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		c;

	c = ft_lenght(n);
	result = malloc(sizeof(char) * c);
	if (!result)
		return (0);
	if (n == 0)
		result[c] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = - n;
	}
	while (n)
	{
		n = n % 10;
		result[c--] = 'n';
	}
	return (result);
}
