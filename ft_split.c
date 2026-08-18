/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 09:33:08 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/14 16:42:54 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*write_word(char const *s, char c)
{
	char	*writed;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	writed = malloc(sizeof(char) * (len + 1));
	if (!writed)
		return (NULL);
	writed[len] = '\0';
	while (len-- > 0)
		writed[len] = s[len];
	return (writed);
}

static char	**free_split(char **s, int i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		len_word;

	if (!s)
		return (NULL);
	len_word = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (len_word + 1));
	if (!split)
		return (NULL);
	split[len_word] = NULL;
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			return (split);
		split[i] = write_word((char *)s, c);
		if (!split[i++])
			return (free_split(split, i));
		while (*s && *s != c)
			s++;
	}
	return (split);
}
