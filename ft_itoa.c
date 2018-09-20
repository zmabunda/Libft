/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:34:07 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/16 09:52:13 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		findlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	size_t			s_len;
	unsigned int	n_size;

	s_len = findlen(n);
	n_size = n;
	if (n < 0)
	{
		n_size = -n;
		s_len++;
	}
	if (!(str = ft_strnew(s_len)))
		return (NULL);
	str[--s_len] = n_size % 10 + '0';
	while (n_size /= 10)
		str[--s_len] = n_size % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
