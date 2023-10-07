/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:47:05 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/07 18:55:52 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	ii;
	unsigned int	i;

	i = 0;
	ii = 0;
	while (dest[ii])
		ii++;
	while (src[i])
	{
		if (i < size - 1)
			dest[ii] = src[i];
		i++;
		ii++;
	}
	dest[ii - 1] = '\0';
	return (ii);
}
/*
int 	main(void)
{
	char	src[] = "world";
	char	dest[] = "Hello";

	ft_strlcat(dest, src, 4);
	printf("%s", dest);
}*/
