/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recurcive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakurai <ymt.cherbr23@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:32:18 by ysakurai          #+#    #+#             */
/*   Updated: 2022/01/08 23:32:18 by ysakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	recursive_sum(int n)
{
	if (n == 0)
		return (0);
	return (n + recursive_sum(n-1));
}

int	main(void)
{
	printf("%d\n", recursive_sum(10));
	return (0);
}
