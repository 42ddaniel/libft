/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <ddaniel-@student.42lisboa.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:47:41 by diogo             #+#    #+#             */
/*   Updated: 2023/09/15 23:08:46 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int     main(void)
{
        char    c;
        char    d;

        c = '0';
        d = '0';
        printf("%d\n", ft_isdigit(c));
        printf("%d", isdigit(d));
}*/
