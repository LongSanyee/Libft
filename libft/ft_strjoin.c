/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rammisse <rammisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:26:19 by rammisse          #+#    #+#             */
/*   Updated: 2024/11/03 15:50:10 by rammisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_s1(char *dest, const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	copy_s1(str, s1);
	while (s2[j])
	{
		str[s1len + j] = s2[j];
		j++;
	}
	str[s1len + j] = '\0';
	return (str);
}
