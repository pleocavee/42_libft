/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchong <kchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:54:05 by kchong            #+#    #+#             */
/*   Updated: 2019/02/13 21:07:20 by kchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strncmp(s1, s2, ft_strlen(s1)) == 0)
		return (1);
	else
		return (0);
}
