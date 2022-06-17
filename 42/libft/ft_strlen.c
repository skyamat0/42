/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakurai <ymt.cherbr23@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:39:25 by ysakurai          #+#    #+#             */
/*   Updated: 2022/01/09 17:56:15 by ysakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	length;

	length = 0;
	while (*c != '\0')
	{
		length++;
		c++;
	}
	return (length);
}
