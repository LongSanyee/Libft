/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:29:05 by rammisse          #+#    #+#             */
/*   Updated: 2024/11/01 10:51:33 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	else
	{
		while (i < len && haystack[i])
		{
			j = 0;
			while (needle[j] && i + j < len && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return ((char *)haystack + i);
			}
			i++;
		}
		return (NULL);
	}
}
