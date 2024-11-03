/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:57:17 by rammisse          #+#    #+#             */
/*   Updated: 2024/10/29 15:23:54 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*q;
	unsigned char	*ptr;

	if (!dst && !src)
		return (0);
	i = 0;
	q = (unsigned char *)src;
	ptr = (unsigned char *)dst;
	while (i < n)
	{
		ptr[i] = q[i];
		i++;
	}
	return (dst);
}
