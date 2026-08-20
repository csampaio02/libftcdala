/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:21:10 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/19 11:21:17 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*s;

	if (!str)
		return (NULL);
	s = (unsigned char *)str;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s[i] = c1;
		i++;
	}
	return (s);
}
