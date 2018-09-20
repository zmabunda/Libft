/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 07:35:24 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/01 16:32:04 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*tmp;
	int			len;

	i = 0;
	len = ft_strlen(s1);
	tmp = (char*)malloc(sizeof(char) * len + 1);
	if (tmp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
		tmp[i] = '\0';
	}
	return (tmp);
}
