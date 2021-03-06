/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_icount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchong <kchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:07:29 by kchong            #+#    #+#             */
/*   Updated: 2019/02/20 15:03:51 by kchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_icount(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count = 1;
	while (n / 10 != 0)
	{
		count++;
		n = n / 10;
	}
	return (++count);
}
