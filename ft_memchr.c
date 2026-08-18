/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:33:53 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/10 11:36:08 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (s == NULL || n == 0)
		return (NULL);
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}
