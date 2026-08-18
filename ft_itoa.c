/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csampaio <csampaio@student.42luanda.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 16:07:32 by csampaio          #+#    #+#             */
/*   Updated: 2026/08/13 11:59:07 by csampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_char(char *s, long num, long len)
{
	while (num != 0)
	{
		s[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (s);
}

static long	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*s;
	long		len;
	long		num;

	len = ft_len(n);
	s = malloc(sizeof(char) * (len + 1));
	num = n;
	if (!s)
		return (NULL);
	s[len] = '\0';
	len--;
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	ft_char(s, num, len);
	return (s);
}
