/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:49:18 by ctirions          #+#    #+#             */
/*   Updated: 2021/03/18 14:56:38 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*pt;

	if (!s)
		return (0);
	i = -1;
	if (ft_strlen(s) < start)
	{
		if (!(pt = (char *)ft_calloc(sizeof(char), 1)))
			return (0);
		return (pt);
	}
	if (!(pt = (char *)ft_calloc(sizeof(char), len + 1)))
		return (0);
	while (++i < len)
		pt[i] = s[start + i];
	return (pt);
}
