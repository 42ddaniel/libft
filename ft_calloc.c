/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 00:23:43 by diogo             #+#    #+#             */
/*   Updated: 2023/10/11 00:26:06 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	pre = malloc(n * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n * size);
	return (ptr),
}
