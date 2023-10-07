/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddaniel- <ddaniel-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:45:52 by ddaniel-          #+#    #+#             */
/*   Updated: 2023/10/07 19:05:26 by ddaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!str1[i] || !str2[i])
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (i == n)
		i--;
	return (str1[i] - str2[i]);
}
