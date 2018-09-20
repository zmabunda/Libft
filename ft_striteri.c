/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:08:46 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/07 14:05:29 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*var;

	var = (char *)s;
	if (var && f)
	{
		i = 0;
		while (var[i] != '\0')
		{
			f(i, &var[i]);
			i++;
		}
	}
}
