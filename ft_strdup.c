/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:51:23 by ctirions          #+#    #+#             */
/*   Updated: 2020/12/13 16:18:43 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*pt;
	int		size;

	size = ft_strlen(str);
	if (!(pt = (char *)ft_calloc(sizeof(char) * (size + 1))))
		return (0);
	size = 0;
	while (*str)
		pt[size++] = *str++;
	return (pt);
}
