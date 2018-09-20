/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:13:42 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/08 09:30:52 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t n)
{
	unsigned int	i;
	char			*var;

	if (!s1)
		return (NULL);
	var = (char *)malloc(sizeof(char) * (n + 1));
	if (var == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		var[i] = s1[start + i];
		i++;
	}
	var[i] = '\0';
	return (var);
}
