/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:15:28 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/08 08:54:50 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		itr;

	itr = ft_strlen(s);
	if (c == 0)
		return ((char *)s + itr);
	while (itr >= 0)
	{
		if (s[itr] == c)
			return ((char *)s + itr);
		itr--;
	}
	return (NULL);
}
