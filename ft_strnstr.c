/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:16:27 by diogo             #+#    #+#             */
/*   Updated: 2023/10/07 14:34:32 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strnstr(const char *bstr, const char *lstr, size_t n)
{
	size_t	i;

	b_len = ft_str;
	if (*little == '\0')
		return ((char *)bstr);
	i = ft_strlen(lstr);
	if (n == 0)
		return (n);
	while (*bstr && i <= n)
	{
		if (*bstr == lstr && ft_strncmp(bstr, lstr, i) == 0)
			return ((char *)big);
		bstr++;
		n--;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "Indo eu, indo eu";
	char	str1[] = "indo";
	ft_putendl_fd(ft_strnstr(str, str1, ft_strlen(str)), 1);
}*/
