/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:43:42 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/05 18:59:33 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != c && i >= 0)
		i--;
	if (i < 0)
		return ((char*)0);
	else
		return ((char*)(str + i));
}
/*
int	main()
{
	const char	str[] = "Hello World";
	int	c = 'o';
	char	*ptr = ft_strrchr(str, c);
	printf("%s", ptr);
}*/
