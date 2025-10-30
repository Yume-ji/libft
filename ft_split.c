/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:01:47 by chachait          #+#    #+#             */
/*   Updated: 2025/08/29 13:12:01 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	count_s(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**s_empty(void)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * 1);
	res[0] = NULL;
	return (res);
}

char	**res_malloc(char **res, size_t count)
{
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[count] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	i;
	size_t	n;
	char	**res;

	res = NULL;
	if (s[0] == '\0')
		return (s_empty());
	count = count_s(s, c);
	res = res_malloc(res, count);
	i = 0;
	n = -1;
	while (++n < count)
	{
		while (s[i] == c && s[i])
			i++;
		len = 0;
		i -= 1;
		while (s[++i] != c && s[i])
			len++;
		res[n] = ft_substr(s, i - len, len);
	}
	return (res);
}
