/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:52:35 by rammisse          #+#    #+#             */
/*   Updated: 2024/10/27 10:41:44 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pt;

	i = 0;
	pt = (unsigned char *)b;
	while (i < len)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (pt);
}
