/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:50:45 by chachait          #+#    #+#             */
/*   Updated: 2025/08/29 12:00:20 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		s2_len;

	i = -1;
	if (little[0] == '\0')
		return ((char *)big);
	s2_len = ft_strlen(little);
	while (++i < len && big[i] && len - i >= s2_len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, s2_len) == 0)
				return ((char *)big + i);
		}
	}
	return (NULL);
}
