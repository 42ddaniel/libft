/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:12:47 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/15 19:13:30 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (!n || !size)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, n * size);
	return (ptr);
}
