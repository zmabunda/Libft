/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 09:20:01 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/13 16:20:07 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		whtspc(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*done;

	if (!s)
		return (0);
	i = 0;
	while (whtspc(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && whtspc(s[len]))
		len--;
	if (len < 1)
		return (done = ft_strdup(""));
	return (done = ft_strsub(s, i, len - (size_t)i + 1));
}
