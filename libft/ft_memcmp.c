/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:01:18 by rammisse          #+#    #+#             */
/*   Updated: 2024/10/29 22:09:38 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt;
	unsigned char	*ptr;
	size_t			i;

	pt = (unsigned char *)s1;
	ptr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (pt[i] != ptr[i])
		{
			return ((pt[i] - ptr[i]));
		}
		i++;
	}
	return (0);
}
