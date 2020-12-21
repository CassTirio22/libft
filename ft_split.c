/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:04:19 by ctirions          #+#    #+#             */
/*   Updated: 2020/12/13 16:16:02 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_all(char **dst, int max)
{
	int			i;

	i = -1;
	while (++i < max)
		free(dst[i]);
	free(dst);
}

static size_t	ft_wordlen(char *s, char c)
{
	size_t		size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static size_t	ft_word_count(char *s, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		i = ft_wordlen(s, c);
		s += i;
		if (i)
			count++;
	}
	return (count);
}

char			**ft_split(const char *s, char c)
{
	char		**dst;
	size_t		i;
	size_t		size;
	char		*s2;

	if (!s)
		return (0);
	s2 = (char *)s;
	size = ft_word_count(s2, c);
	if (!(dst = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	i = -1;
	while (++i < size)
	{
		while (*s2 && *s2 == c)
			s2++;
		if (!(dst[i] = ft_substr((const char *)s2, 0, ft_wordlen(s2, c))))
		{
			ft_free_all(dst, i);
			return (0);
		}
		s2 += ft_wordlen(s2, c);
	}
	dst[size] = 0;
	return (dst);
}
