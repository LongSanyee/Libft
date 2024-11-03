/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:54:34 by rammisse          #+#    #+#             */
/*   Updated: 2024/10/27 10:42:55 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;
	unsigned char	ptr;

	pt = (unsigned char *)s;
	ptr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (pt[i] == ptr)
		{
			return (pt + i);
		}
		i++;
	}
	return (NULL);
}
