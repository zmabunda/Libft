/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 07:32:10 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/08 08:53:14 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	itr;

	itr = 0;
	while (s[itr])
	{
		if (s[itr] == c)
			return ((char *)s + itr);
		itr++;
	}
	if (!c && s[itr] == '\0')
		return ((char *)s + itr);
	return (NULL);
}
