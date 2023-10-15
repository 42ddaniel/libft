/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:49:34 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/15 22:45:06 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	numb;
	int			count;
	char		*str;

	numb = n;
	count = ft_digitcount(numb);
	str = malloc(count * sizeof(char) + 1);
	if (!str)
		return (0);
	str[count--] = 0;
	if (numb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (numb < 0)
	{
		str[0] = '-';
		numb *= -1;
	}
	while (numb > 0)
	{
		str[count--] = numb % 10 + 48;
		numb /= 10;
	}
	return (str);
}
