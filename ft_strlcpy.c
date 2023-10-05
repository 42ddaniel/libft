/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:17:32 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/05 16:57:58 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	srcl;

	i = 0;
	srcl = 0;
	if (!src)
		return (0);
	while (src[srcl])
		srcl++;
	if (!size)
		return (srcl);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcl);
}
/*
int	main()
{
	char	src[] = "Hello";
	char	dest[] = "";
	ft_strlcpy(dest, src, 4);
	printf("%s", dest);
}*/
