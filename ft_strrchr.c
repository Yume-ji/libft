/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:27:49 by chachait          #+#    #+#             */
/*   Updated: 2025/08/28 17:45:39 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		new_c;
	const char	*str;

	str = s;
	new_c = c;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	if (str[len] == new_c)
		return ((char *)str + len);
	while (len > 0)
	{
		if (str[len - 1] == new_c)
			return ((char *)str + (len - 1));
		len--;
	}
	return (NULL);
}
