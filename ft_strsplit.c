/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspilt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:04:13 by zmabunda          #+#    #+#             */
/*   Updated: 2018/06/13 08:57:13 by zmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_words(char const *s, char d)
{
	size_t	numwords;
	size_t	i;

	i = 0;
	numwords = 0;
	if (s[i] && (s[i] != d) && (s[i + 1] != d) && (s[i + 1] != 0))
		numwords++;
	while (s[i])
	{
		if ((s[i] == d) && (s[i + 1] != d) && (s[i + 1] != 0))
			numwords++;
		i++;
	}
	return (numwords);
}

static int	ft_actual(char **arr, const char *s, char d, size_t len)
{
	size_t	count;
	size_t	wordsize;
	size_t	i;

	count = 0;
	i = 0;
	while (count < len)
	{
		wordsize = 0;
		while (s[i] == d && s[i])
			i++;
		while (s[i] != d && s[i])
		{
			wordsize++;
			i++;
		}
		if ((arr[count] = ft_strsub(&s[i - wordsize], 0, wordsize)) == NULL)
			return (0);
		count++;
	}
	arr[count] = 0;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**arr;
	int			len;

	if (!s)
		return (NULL);
	len = cnt_words(s, c);
	if ((arr = ((char **)ft_memalloc(sizeof(char *) * len + 1))) == NULL)
		return (NULL);
	if (ft_actual(arr, s, c, len))
		return (arr);
	else
		ft_memdel((void **)arr);
	return (arr);
}
