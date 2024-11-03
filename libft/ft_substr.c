/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:24:06 by rammisse          #+#    #+#             */
/*   Updated: 2024/11/02 16:25:18 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*q;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen - start)
		len = slen - start;
	if (start >= slen)
		return ((char *) ft_calloc(1, sizeof(char)));
	i = 0;
	q = (char *)malloc(sizeof(char) * (len + 1));
	if (!q)
		return (NULL);
	while (i < len)
	{
		q[i] = s[start + i];
		i++;
	}
	q[i] = '\0';
	return (q);
}
