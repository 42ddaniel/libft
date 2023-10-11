/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:36:19 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/11 18:47:15 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	d;
	char	*subs;

	if(!s)
		return (0);
	subs = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	d = 0;
	while (s[i])
	{
		if (i <= start && d < len)
		{
			subs[d] = s[i];
			d++;
		}
		i++;
	}
	subs[d] = '\0';
	return (subs);
}
