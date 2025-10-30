/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:29:12 by chachait          #+#    #+#             */
/*   Updated: 2025/08/28 18:02:42 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	frt;
	size_t	len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	frt = 0;
	len = ft_strlen(s1);
	while (s1[frt] && ft_strchr(set, s1[frt]) != NULL)
		frt++;
	if (frt == len)
		return (ft_strdup(""));
	while (len != 0 && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	res = (char *)malloc(sizeof(char) * (len + 1 - frt));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + frt, len + 1 - frt);
	return (res);
}
