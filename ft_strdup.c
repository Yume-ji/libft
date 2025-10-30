/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chachait <chachait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:05:02 by chachait          #+#    #+#             */
/*   Updated: 2025/08/27 14:15:39 by chachait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*new_s;
	const char	*str;
	size_t		len;
	size_t		i;

	str = s;
	len = ft_strlen(str);
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		new_s[i] = str[i];
	new_s[i] = '\0';
	return (new_s);
}
