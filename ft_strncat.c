/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 07:36:31 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/08 09:01:24 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[len] != '\0' && len < n)
	{
		s1[i + len] = s2[len];
		len++;
	}
	s1[i + len] = '\0';
	return (s1);
}
