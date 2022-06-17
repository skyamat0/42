/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakurai <ymt.cherbr23@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:09:38 by ysakurai          #+#    #+#             */
/*   Updated: 2022/01/24 18:09:38 by ysakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	n_len;
	size_t	h_len;

	i = 0;
	n_len = ft_strlen(n);
	h_len = ft_strlen(h);
	if (n_len > len || n_len > h_len)
		return (0);
	while (i < len || *(h + i) != '\0')
	{
		if (h_len - i < n_len)
			return (0);
		if (*(h + i) == *n)
			if (ft_strncmp((h + i), n, n_len) == 0)
				return ((char *)(h + i));
		i++;
	}
	return (0);
}
