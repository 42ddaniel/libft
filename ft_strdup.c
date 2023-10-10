/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 00:36:46 by diogo             #+#    #+#             */
/*   Updated: 2023/10/11 00:46:58 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;

	len = ft_strlrn(s) + 1;
	dst = malloc(len);
	if (dst == 0)
		return (0);
	ft_memcpy(dst, s, len);
	return (dst);
}
