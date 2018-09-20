/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:46:08 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/07 14:09:44 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f) (unsigned int, char))
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
		var[i] = f(i, s[i]);
		i++;
	}
	var[i] = '\0';
	return (var);
}
