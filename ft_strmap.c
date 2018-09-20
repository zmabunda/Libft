/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:43:28 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/07 13:56:22 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	unsigned int	i;
	char			*var;

	if (!s || !f)
		return (NULL);
	var = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (var == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		var[i] = f(s[i]);
		i++;
	}
	var[i] = '\0';
	return (var);
}
