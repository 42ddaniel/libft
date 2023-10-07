/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:16:10 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/07 20:29:50 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bstr, const char *lstr, size_t n)
{
	size_t	i;

	i = 0;
	if (*lstr == 0)
		return ((char *)bstr);
	n = ft_strlen(lstr);
	if (n == 0)
		return (0);
	while (*bstr && i <= n)
	{
		if (*bstr == *lstr && ft_strncmp(bstr, lstr, i) == 0)
			return ((char *)bstr);
		++bstr;
		--n;
	}
	return (0);
}
