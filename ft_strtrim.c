/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 09:35:42 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/12 12:53:46 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	if ((end - start) < 0)
		return (ft_strdup(""));
	trim = malloc(sizeof(char) * ((end + 1) - start + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1, ((end + 1) - start + 1));
	return (trim);
}
