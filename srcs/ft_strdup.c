/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:51:23 by ctirions          #+#    #+#             */
/*   Updated: 2021/03/18 15:05:13 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*pt;
	int		size;

	size = ft_strlen(str);
	if (!(pt = (char *)ft_calloc(sizeof(char), (size + 1))))
		return (0);
	size = 0;
	while (*str)
		pt[size++] = *str++;
	return (pt);
}
