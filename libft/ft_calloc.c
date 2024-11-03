/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:49:57 by rammisse          #+#    #+#             */
/*   Updated: 2024/10/30 10:54:48 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*pt;

	pt = malloc(count * size);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, count * size);
	return (pt);
}
