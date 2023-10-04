/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:17:33 by diogo             #+#    #+#             */
/*   Updated: 2023/10/04 23:54:42 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char*)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*
int main()
{
	char	str[] = "HELLO WORLD";
	char	c = '*';
	ft_memset(str + 4, c, 1);
	printf("%s", str);
}*/
