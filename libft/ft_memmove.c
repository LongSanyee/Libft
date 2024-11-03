/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:27:47 by rammisse          #+#    #+#             */
/*   Updated: 2024/11/02 10:20:18 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	moveforward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*pt;

	if (!dst && !src)
		return ((NULL));
	ptr = (unsigned char *)dst;
	pt = (const unsigned char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			ptr[len] = pt[len];
		}
	}
	else
	{
		moveforward(ptr, pt, len);
	}
	return (dst);
}
