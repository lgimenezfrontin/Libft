/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:00:01 by lgimenez          #+#    #+#             */
/*   Updated: 2020/03/11 15:21:34 by lgimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	int				i;

	s2 = (unsigned char*)s;
	i = 0;
	while (n)
	{
		if (s2[i] == (unsigned char)c)
			return ((void*)s + i);
		i++;
		n--;
	}
	return (NULL);
}
