/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:36:19 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/18 00:41:31 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		totlen;
	char	*dest;
	size_t	i;

	totlen = len - start;
	dest = (char *)malloc(sizeof(char) * (totlen + 1));
	if (!dest)
		return (NULL);
	i = start;
	while (i < len && s[i] != '\0')
	{
		*dest = *(s + i);
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - totlen);
}
/*
int	main()
{
	char const	*s;

	s = "substr function Implementation";
	printf("%s", ft_substr(s, 7, 12));
}*/
