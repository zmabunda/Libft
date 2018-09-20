/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:00:35 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/01 15:17:46 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*d;
	char		*s;

	count = 0;
	d = (char *)dst;
	s = (char *)src;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (d);
}
