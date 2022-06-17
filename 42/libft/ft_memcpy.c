/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakurai <ymt.cherbr23@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:46:48 by ysakurai          #+#    #+#             */
/*   Updated: 2022/02/26 16:46:48 by ysakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char		*d;
	size_t		i;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i <= n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}
