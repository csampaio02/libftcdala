/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:47:46 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/13 15:03:57 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t	size;
	size_t	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	map = malloc(sizeof(char) * (size + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < size)
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
