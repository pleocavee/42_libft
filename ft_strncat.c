/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchong <kchong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:27:58 by kchong            #+#    #+#             */
/*   Updated: 2019/02/15 14:33:11 by kchong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = ft_strlen(s1);
	while (n-- && *s2)
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
